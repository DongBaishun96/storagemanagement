#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int maxp = 10010;

typedef struct NODE {
	int p_id; //���
	int p_no; //���̺�
	int p_op; //����or�ͷ�
	int p_size; //����or�ͷ�����
}PROCESS;
PROCESS process[maxp];

struct FFLIST {
	int data;
	struct FFLIST *next;
};
struct FFLIST *FFlist;
struct FFLIST *FFhead;

int SIZE = 0;
int algorithm = 0;
int p_num = 0;

void testInput() {
	for (int i = 0;i < p_num;i++) {
		printf("%d %d %d %d\n", process[i].p_id,
			process[i].p_no, process[i].p_op, process[i].p_size);
	}
}

void input() {
	int i = 0;
	scanf("%d%d", &algorithm, &SIZE);
	while (scanf("%d/%d/%d/%d\n", &process[i].p_id,
		&process[i].p_no, &process[i].p_op, &process[i].p_size) != EOF) {
		i++;
	}
	p_num = i;
	//testInput();
}

void FF() {
	FFlist = (struct FFLIST *)malloc(sizeof(struct FFLIST));
	if (FFlist == NULL) {
		printf("�ڴ����ʧ�ܣ�\n");
		exit(0);
	}
	memset(FFlist, 0, sizeof(struct FFLIST));
	struct FFLIST *p = NULL;
	p = (struct FFLIST *)malloc(sizeof(struct FFLIST));
	p->data = 0;
	FFlist->next = p;

	for (int i = 0;i < SIZE;i++) {
		struct FFLIST *q = (struct FFLIST *)malloc(sizeof(struct FFLIST));
		q->data = 0;
		p->next = q;
		p = q;
	}

	for (int i = 0;i < p_num;i++) {

	}

}

int main()
{
	freopen("in.txt", "r", stdin);
	input();



	fclose(stdin);
	return 0;
}