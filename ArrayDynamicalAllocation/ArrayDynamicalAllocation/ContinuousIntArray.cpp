#include "stdafx.h"
using namespace std;


//��̬�����ά���� 
template <typename T>
T** get2DArray(int row,int col)
{
	int size=sizeof(T);
	int psize=sizeof(T*);
	//�ʼ���ÿһ�е�ָ��
	int totsize=psize*row + size*row*col;
	T **arr=(T **)malloc(totsize);
	if(arr!=NULL)
	{
		memset(arr,0,totsize);
		T *head=(T*)((int)arr + psize*row);
		while(row--)
			arr[row]=(T*)((int)head + size*row*col);
	}
	return (T**)arr;
}
//�ͷŶ�ά����
void free2DArray(void **arr)
{
	if(arr!=NULL)
		free(arr);
}


int _tmain1(int argc, _TCHAR* argv[])
{
	int row,col;
	scanf("%d%d",&row,&col);
	int **p = get2DArray<int>(row,col);  

    //Ϊ��ά���鸳ֵ  
    int i, j, w=1;  
    for (i = 0; i < row; i++)  
        for (j = 0; j < col; j++)  
			p[i][j] = w++;  


      
    //�����ά����  
    for (i = 0; i < row; i++)  
    {  
        for (j = 0; j < col; j++)  
            cout<<setw(5)<<p[i][j];
        putchar('\n');  
    }  
	cout<<"�����С�� "<<_msize(p)<<endl;
    //�ͷ���Դ  
    free2DArray((void**)p);  
	system("pause");
	return 0;
}