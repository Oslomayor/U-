/*���ܣ�����U��ͼ��*/
#include <stdio.h>
#include <windows.h>
#include <string.h>
int main()
{
	FILE *p;
    char choose,password[20];
    printf("1.�鿴ʹ��˵��\n2.׼����������ʼ����U��ͼ��\n�������Ӧ����ѡ��\n");
    fflush(stdin);//��ջ�����
    start:
    choose=getch();
    switch(choose)
    {
        case '1':
                printf("Step.1 ��һ��ϲ����ico��ʽͼƬ��������Ϊ1.ico������U�̸�Ŀ¼��\n");
                printf("Step.2 ����˵����رձ����򣬰ѱ������Ƶ�U�̸�Ŀ¼��\n");
                printf("Step.3 ׼��������������˫������U���еı�����\n");
                break;
        case '2':
                printf("����������Ȼ��Enter\n");
                gets(password);
                if(strcmp(password,"284178")!=0)  
                {                
                    printf("������ȷ���룡\n");
                    Sleep(1000);
                    exit(0);
                }
                //����4��Ϊ����U��ͼ����Ĵ���
				p=fopen("autorun.inf","w");
				fprintf(p,"[Autorun]");
				fprintf(p,"\n");
				fprintf(p,"icon=1.ico");
				fclose(p);
                //����2�������ļ�����Ϊ����
                system("attrib +h 1.ico");
                system("attrib +h autorun.inf");
                printf("U��ͼ�������ɣ����°β���Ч\n");
                break;
        default : printf("��ѡ��1��2��\n");
                  Sleep(1000);
                  goto start;
    }
	system("pause");
	return 0;
}
