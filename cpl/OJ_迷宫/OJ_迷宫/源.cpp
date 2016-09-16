#include<stdio.h>
//���������Թ��Ľṹ
typedef char Maze[11][11];

typedef struct { //�Թ��е�Ľṹ
	int r; //������
	int c; //������
}PosType;

typedef struct {
	PosType seat; //��ǰ·������Ϣ
	int di; //��ǰ·����ķ���ȡֵΪ[1,4]
}MazePoint;

#define MaxSize 101
typedef struct {
	MazePoint space[MaxSize];
	int top;
}Stack;
void Init(Stack *S) {
	S->top = -1;
}
int IsEmpty(Stack *S) {
	return S->top == -1;
}
int IsFull(Stack *S) {
	return S->top == MaxSize - 1;
}
void Push(Stack *S, MazePoint e) {
	if (IsFull(S))
		return;
	S->space[++S->top] = e;
}
void Pop(Stack *S, MazePoint *e) {
	if (IsEmpty(S))
		return;
	*e = S->space[S->top--];
}

int Pass(Maze map, PosType pos) {
	if (map[pos.r][pos.c] == '#' || map[pos.r][pos.c] == '*' || map[pos.r][pos.c] == '!')
		return 0;
	return 1;
}
void Print(Maze map) {
	int i, j;
	for (i = 0; i<10; i++) {
		for (j = 0; j<10; j++) {
			printf("%c", map[i][j]);
		}
		printf("\n");
	}
}
void MarkPoint(Maze map, PosType pos, char c) {
	map[pos.r][pos.c] = c;
	//Print(map);
}
void Mov(PosType *pos, int di) {
	switch (di) {
	case 1:
		pos->c++;
		break;
	case 2:
		pos->r++;
		break;
	case 3:
		pos->c--;
		break;
	case 4:
		pos->r--;
		break;
	}
}
void MazePath(Maze map, PosType start, PosType end) {
	PosType curpos = start;
	MazePoint e;
	Stack S;
	Init(&S);
	do {
		if (Pass(map, curpos)) {
			e.seat = curpos;
			e.di = 1;
			MarkPoint(map, curpos, '*');
			if (curpos.c == end.c && curpos.r == end.r)
				return;
			Push(&S, e);
			Mov(&curpos, e.di);
		}
		else {
			Pop(&S, &e);
			curpos = e.seat;
			if (e.di >= 4) { //ͨ����ǰ e.seat ����ĸ�������ѳ��ԣ�ʧ�ܣ���ǰ��Ϊ��Ч��
				MarkPoint(map, curpos, '!');
				//Pop(&S, &e);
			}
			else { //����δ���Ե���������
				e.di++;
				Push(&S, e);
				Mov(&curpos, e.di);
			}
		}
	} while (!IsEmpty(&S));
}


int main() {
	Maze map;
	PosType start, end;
	//1.�����ͼ
	int i, j;
	for (i = 0; i<10; i++) {
		for (j = 0; j<10; j++) {
			scanf("%c", &map[i][j]);
			if (map[i][j] == 'E') {
				end.r = i;
				end.c = j;
			}
			if (map[i][j] == 'S') {
				start.r = i;
				start.c = j;
			}
		}
		getchar();
	}
	//2.����·��
	MazePath(map, start, end);
	//3.������
	Print(map);
}