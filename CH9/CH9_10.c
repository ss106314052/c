#include <stdio.h>
#include <stdlib.h>
void CH9_10()
{
	/* �ŧi���c���A */
	struct node {
		char name[20];
		int score;
		struct node *next;
	};
	struct node *ptr1, *ptr2, *ptr3,
		*current;
	/* �ϥ�malloc��ưt�m�O���� */
	ptr1 = (struct node *)
		malloc(sizeof(struct node));
	printf("�п�J ptr1 �`�I���m�W : ");
		scanf("%s", &ptr1->name); /* ��J�m�W */
	printf("�п�J ptr1 �`�I������ : ");
		scanf("%d", &ptr1->score); /* ��J���� */
	ptr2 = (struct node *)
		malloc(sizeof(struct node));
	printf("\n�п�J ptr2 �`�I���m�W : ");
		scanf("%s", &ptr2->name); /* ��J�m�W */
	printf("�п�J ptr2 �`�I������ : ");
		scanf("%d", &ptr2->score); /* ��J���� */
								   /* �N ptr1 �� next ���Ы��V ptr2 */
	ptr1->next = ptr2;
	ptr3 = (struct node *) malloc(sizeof(struct
node));
	printf("\n�п�Jptr3�`�I���m�W: ");
	scanf("%s", &ptr3->name); /* ��J�m�W */
	printf("�п�Jptr3�`�I������: ");
	scanf("%d", &ptr3->score); /* ��J���� */
	ptr3->next = NULL;/*ptr3 �� next ���г]��
					  NULL*/
	ptr2->next = ptr3;/*�N ptr2 ��next ���Ы��V
					  ptr3*/
					  //���Ncurrent���Vptr1
	current = ptr1;
	printf("\n\n�൲��C����Ʀp�U:\n");
	//�P�_current���Щҫ��V���`�I�O�_���Ÿ`�I
	while (current != NULL) {
		printf("%10s ", current->name); /*��X�m�W*/
		printf("%5d\n", current->score);/*��X����*/
										//�Ncurrent���V�U�@�`�I
		current = current->next;
	}
	system("PAUSE");
	return 0;
}