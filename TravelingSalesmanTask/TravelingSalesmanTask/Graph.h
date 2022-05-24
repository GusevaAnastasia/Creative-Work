#pragma once
#pragma once
#include <glut.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int n;
int** hp;
int* result;
int*** mt;
int r;
int WinW;
int WinH;
const int MaxSize = 20;
int VertsAmount;

template<class T>

class Graph
{
	vector<T> vertList;
	vector<T> labelList;
	bool* visitedVerts = new bool[vertList.size()];
public:
	int AdjMatrix[MaxSize][MaxSize] = { 0 };
	Graph();
	~Graph();
	void DrawGraph();
	void InsertEdge(const T& vertex1, const T& vertex2, int weight);
	void InsertVertex(const T& vertex);
	void DeleteVertex();
	int GetVertPos(const T& vertex);
	bool IsEmpty();
	bool IsFull();
	int GetAmountVerts();
	int GetEdgesAmount();
	int GetWeight(const T& vertex1, const T& vertex2);
	vector<T> GetNbrs(const T& vertex);
	void Print();
};

struct Coords
{
	int x, y;
};
Coords vc[20];

Graph<int> graph;

void SolFunKom(int*** mt, int n, int** hp, int* path) //минимумы по строкам и столбцам
{

	for (int l = 0; l < n; l++)
	{
		for (int i = 0; i < n; i++)
		{
			int min = 10000;
			for (int j = 0; j < n; j++)
				if (mt[i][j] && min > *mt[i][j])
					min = *mt[i][j];
			for (int j = 0; j < n; j++)
				if (mt[i][j])
					*mt[i][j] -= min;
		}

		for (int j = 0; j < n; j++)
		{
			int min = 10000;
			for (int i = 0; i < n; i++)
				if (mt[i][j] && min > *mt[i][j])
					min = *mt[i][j];
			for (int i = 0; i < n; i++)
				if (mt[i][j])
					*mt[i][j] -= min;
		}

		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				hp[i][j] = 0;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (mt[i][j] && !*mt[i][j])
				{
					int hmin = 10000;
					int vmin = 10000;

					for (int l = 0; l < n; l++)
						if (l != i && mt[l][j] && hmin > *mt[l][j])
							hmin = *mt[l][j];

					for (int l = 0; l < n; l++)
						if (l != j && mt[i][l] && vmin > *mt[i][l])
							vmin = *mt[i][l];

					hp[i][j] = hmin + vmin;
				}
			}
		}

		int mcost = 0, mi = 0, mj = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (mt[i][j] && mcost < hp[i][j])
				{
					mcost = hp[i][j];
					mi = i;
					mj = j;
				}
			}
		}

		path[mi] = mj;

		for (int i = 0; i < n; i++)
			mt[i][mj] = nullptr;

		for (int i = 0; i < n; i++)
			mt[mi][i] = nullptr;

		mt[mj][mi] = nullptr;
	}
}

void SolFunKom2(int***& mt, int& n, int**& hp, int*& result) //создание матрицы
{
	n = VertsAmount;

	hp = new int* [n];

	result = new int[n];

	mt = new int** [n];

	for (int i = 0; i <= n; i++)
	{
		hp[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		mt[i] = new int* [n];
		for (int j = 0; j < n; j++)
		{
			if (graph.AdjMatrix[i][j] == 0)
			{
				mt[i][j] = nullptr;
				continue;
			}
			mt[i][j] = new int(graph.AdjMatrix[i][j]);
		}
	}
}


void SolFunKom3(int*** mat, int n, int** hp, int* result) //нахождение кратчайшего пути - решение задачи
{
	SolFunKom2(mat, n, hp, result);
	int s = 0;
	SolFunKom(mat, n, hp, result);

	cout << "Отрезки путей: " << endl;
	for (int i = 0, j = 0; i < n; i++)
	{
		j = result[i];
		cout << i + 1 << " -> " << j + 1 << ' ';
		s += graph.AdjMatrix[i][j];
	}
	cout << endl;

	cout << "Кратчайший путь: " << endl;
	int temp = 0;
	for (int l = 0; l < n;)
	{
		for (int i = 0, j = 0; i < n; i++)
		{
			if (temp == 0 || i + 1 == temp)
			{
				if (temp == 0) cout << i + 1;
				j = result[i];
				temp = j + 1;
				if (temp > 0) cout << " -> " << temp;
				l++;
			}
		}
	}
	cout << endl << "Общее расстояние: " << s << endl;
}


template<class T>
std::vector<T> Graph<T>::GetNbrs(const T& vertex)
{
	std::vector<T> nbrsList;
	int vertPos = this->GetVertPos(vertex);

	if (vertPos != (-1))
	{
		for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i)
		{
			if (this->AdjMatrix[vertPos][i] != 0 && this->AdjMatrix[i][vertPos] != 0)
			{
				nbrsList.push_back(this->vertList[i]);
			}
		}
	}
	return nbrsList;
}



template<class T>
void Graph<T>::InsertVertex(const T& vertex) //добавление элемента
{
	if (!this->IsFull())
	{
		this->vertList.push_back(vertex);
	}
	else
	{
		cout << "Граф заполнен " << endl;
		return;
	}
}

template<class T>
void Graph<T>::DeleteVertex() //удаление элемента
{
	this->vertList.pop_back();
}


template<class T>
int Graph<T>::GetEdgesAmount()
{
	int amount = 0;
	if (!this->IsEmpty())
	{
		for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i)
		{
			for (int j = 0; j < vertListSize; ++j)
			{
				if (this->AdjMatrix[i][j] == this->AdjMatrix[j][i] && this->AdjMatrix[i][j] != 0)
				{
					amount += 1;
				}
			}
		}
		return (amount / 2);
	}
	else return 0;
}

template<class T>
int Graph<T>::GetWeight(const T& vertex1, const T& vertex2)
{
	if (!this->IsEmpty())
	{
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);
		return AdjMatrix[vertPos1][vertPos2];
	}
	return 0;
}

template<class T>
int Graph<T>::GetAmountVerts()
{
	return this->vertList.size();
}

template<class T>
bool Graph<T>::IsEmpty()
{
	if (this->vertList.size() != 0)  return false;
	else return true;
}

template<class T>
bool Graph<T>::IsFull()
{
	return (vertList.size() == MaxSize);
}

template <class T>
int Graph<T>::GetVertPos(const T& vertex)
{
	for (int i = 0; i < this->vertList.size(); ++i)
	{
		if (this->vertList[i] == vertex)
			return i;
	}
	return -1;
}

template<class T>
Graph<T>::Graph()
{
	for (int i = 0; i < MaxSize; ++i)
	{
		for (int j = 0; j < MaxSize; ++j)
		{
			this->AdjMatrix[i][j] = 0;
		}
	}
}

template<class T>
Graph<T>::~Graph() { }


Graph<int> makeGraph() //создание графа, ввод данных
{
	Graph<int> graph;
	int EdgesAmount, VertexF, VertexT, EdgeWeight;

	cout << "Количество вершин: "; cin >> VertsAmount; cout << endl;
	cout << "Количество рёбер: "; cin >> EdgesAmount; cout << endl;

	for (int i = 1; i <= VertsAmount; ++i)
	{
		int* vertPtr = &i;
		graph.InsertVertex(*vertPtr);
	}

	for (int i = 0; i < EdgesAmount; ++i)
	{
		cout << "Начальная вершина: "; cin >> VertexF;
		int* VertFptr = &VertexF;
		cout << "Конечная вершина: "; cin >> VertexT;
		int* VertTptr = &VertexT;

		cout << "Вес: "; cin >> EdgeWeight; cout << endl;

		graph.InsertEdge(*VertFptr, *VertTptr, EdgeWeight);
	}
	cout << endl;

	return graph;
}

template<class T>
void Graph<T>::InsertEdge(const T& vertex1, const T& vertex2, int weight) //дабовление пути
{
	if (this->GetVertPos(vertex1) != (-1) && this->GetVertPos(vertex2) != (-1))
	{
		int vertPos1 = GetVertPos(vertex1);
		int vertPos2 = GetVertPos(vertex2);

		if (this->AdjMatrix[vertPos1][vertPos2] != 0 && this->AdjMatrix[vertPos2][vertPos1] != 0)
		{
			cout << "Такой путь уже есть" << endl;
			return;
		}
		else
		{
			this->AdjMatrix[vertPos1][vertPos2] = weight;
			this->AdjMatrix[vertPos2][vertPos1] = weight;
		}
	}
	else
	{
		cout << "Невозможно провести путь " << endl;
		return;
	}
}

template<class T>
void Graph<T>::Print()  //вывод матрица
{
	if (!this->IsEmpty())
	{
		cout << "Матрица смежности: " << endl;
		for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i)
		{
			cout << this->vertList[i] << " ";
			for (int j = 0; j < vertListSize; ++j)
			{
				cout << " " << this->AdjMatrix[i][j] << " ";
			}
			cout << endl;
		}
	}

}

void setCoord(int i, int n)
{
	int r2;

	int x0 = WinW / 2;
	int y0 = WinH / 2;

	if (WinW > WinH)
	{
		r = 5 * (WinH / 13) / n;
		r2 = WinH / 2 - r - 10;
	}
	else
	{
		r = 5 * (WinW / 13) / n;
		r2 = WinW / 2 - r - 10;
	}

	float a = 2.0f * 3.1415926f * float(i) / float(n);
	float y1 = r2 * cos(a) + y0;
	float x1 = r2 * sin(a) + x0;

	vc[i].x = x1;
	vc[i].y = y1;
}

void drawCircle(int x, int y, int r)
{
	//круг
	glColor3f(0.1, 0.0, 0.1);
	float x1, y1;
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		float a = 2.0f * 3.1415926f * float(i) / float(360);
		y1 = r * cos(a) + y;
		x1 = r * sin(a) + x;;
		glVertex2f(x1, y1);
	}
	glEnd();
	//граница
	glColor3f(1.0f, 1.0f, 1.0f);
	float x2, y2;
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++)
	{
		float a = 2.0f * 3.1415926f * float(i) / float(360);
		y2 = r * cos(a) + y;
		x2 = r * sin(a) + x;
		glVertex2f(x2, y2);
	}
	glEnd();
}

void drawText(int nom, int x1, int y1)
{
	GLvoid* font = GLUT_BITMAP_HELVETICA_18;
	string str = to_string(nom);

	glRasterPos2i(x1 - 5, y1 - 5);

	for (int j = 0; j < str.length(); j++)
		glutBitmapCharacter(font, str[j]);
}

void drawLine(int text, int x0, int y0, int x1, int y1) //отрисовка путей
{
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_LINES);
	glVertex2i(x0, y0);
	glVertex2i(x1, y1);
	glEnd();

	drawText(text, (x0 + x1) / 2 + 10, (y0 + y1) / 2 + 10);
}

void drawVertex(int n)
{
	for (int i = 0; i < n; i++)
	{
		drawCircle(vc[i].x, vc[i].y, r);
		drawText(i + 1, vc[i].x, vc[i].y);
	}
}

template<class T>
void Graph<T>::DrawGraph()
{
	int n = vertList.size();
	for (int i = 0; i < n; i++)
	{
		setCoord(i, n);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int a = AdjMatrix[i][j];
			if (a != 0)
			{
				drawLine(a, vc[i].x, vc[i].y, vc[j].x, vc[j].y);
			}
		}
	}
	drawVertex(n);
}

void reshape(int w, int h)//побор размера окна
{
	WinW = w;
	WinH = h;
	glViewport(0, 0, (GLsizei)WinW, (GLsizei)WinH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, (GLdouble)WinW, 0, (GLdouble)WinH);
	glutPostRedisplay();
}

void drawMenuText(string text, int x1, int y1)
{
	GLvoid* font = GLUT_BITMAP_HELVETICA_18;
	string s = text;
	glRasterPos2i(x1 + 5, y1 - 20);
	for (int j = 0; j < s.length(); j++)
		glutBitmapCharacter(font, s[j]);
}

void drawMenu()
{//кнопки
	int shift = 60;
	int height = 730;

	glColor3d(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2i(shift, height - shift - 30);
	glVertex2i(shift + 135, height - shift - 30);
	glVertex2i(shift + 135, height - shift);
	glVertex2i(shift, height - shift);
	glEnd();
	glColor3d(0.1, 0.0, 0.1);
	drawMenuText("Matrix", shift, height - shift - 2);

	glColor3d(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2i(shift, height - shift - 70);
	glVertex2i(shift + 135, height - shift - 70);
	glVertex2i(shift + 135, height - shift - 40);
	glVertex2i(shift, height - shift - 40);
	glEnd();
	glColor3d(0.1, 0.0, 0.1);
	drawMenuText("Answer", shift, height - shift - 42);

	glColor3d(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2i(shift, height - shift - 110);
	glVertex2i(shift + 135, height - shift - 110);
	glVertex2i(shift + 135, height - shift - 80);
	glVertex2i(shift, height - shift - 80);
	glEnd();
	glColor3d(0.1, 0.0, 0.1);
	drawMenuText("Insert element", shift, height - shift - 82);

	glColor3d(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2i(shift, height - shift - 150);
	glVertex2i(shift + 135, height - shift - 150);
	glVertex2i(shift + 135, height - shift - 120);
	glVertex2i(shift, height - shift - 120);
	glEnd();
	glColor3d(0.1, 0.0, 0.1);
	drawMenuText("Delete element", shift, height - shift - 122);

	glColor3d(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2i(shift, height - shift - 190);
	glVertex2i(shift + 135, height - shift - 190);
	glVertex2i(shift + 135, height - shift - 160);
	glVertex2i(shift, height - shift - 160);
	glEnd();
	glColor3d(0.1, 0.0, 0.1);
	drawMenuText("New", shift, height - shift - 162);
}

void mouseClick(int btn, int stat, int x, int y)
{
	int shift = 60;
	int height = 730;

	if (stat == GLUT_DOWN)
	{

		if (x > shift && x < shift + 135 && y >  shift && y < shift + 30)
		{
			graph.Print();
		}

		if (x > shift && x < shift + 135 && y > shift + 40 && y < shift + 70)
		{
			SolFunKom3(mt, n, hp, result);
		}

		if (x > shift && x < shift + 135 && y >  shift + 80 && y < shift + 100)
		{
			int VertexF;
			int VertexT;
			int EdgeWeight;

			cout << "Начальная вершина: "; cin >> VertexF; cout << endl;
			int* VertFptr = &VertexF;
			cout << "Конечная вершина: "; cin >> VertexT; cout << endl;
			int* VertTptr = &VertexT;

			if (VertexF > VertsAmount || VertexT > VertsAmount) {
				VertsAmount++;
				int* vertPtr = &VertsAmount;
				graph.InsertVertex(*vertPtr);
			}

			cout << "Вес: "; cin >> EdgeWeight; cout << endl;

			graph.InsertEdge(*VertFptr, *VertTptr, EdgeWeight);
		}

		if (x > shift && x < shift + 135 && y >  shift + 120 && y < shift + 140)
		{
			int VertexF;
			int VertexT;
			int EdgeWeight;

			cout << "Вершина для удаления: "; cin >> VertexF; cout << endl;
			int* VertFptr = &VertexF;
			if (VertexF == VertsAmount)
			{
				VertsAmount--;
				graph.DeleteVertex();
			}
			else cout << "Невозможно удалить \n";
		}

		if (x > shift && x < shift + 135 && y >  shift + 160 && y < shift + 180)
		{
			graph = makeGraph();
		}
	}
	glutPostRedisplay();
}

void display()
{
	glShadeModel(GL_SMOOTH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, WinW, 0, WinH);
	glViewport(0, 0, WinW, WinH);
	glClearColor(0.5, 0.5, 0.5, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	graph.DrawGraph();
	drawMenu();
	glutSwapBuffers();
}

void visual()
{

}