/**
*ContinuousIntArray.cpp
*C��������ζ�̬���������Ķ�ά���顣
*���Բ��ö�����һЩָ��,Ȼ����һЩָ��ֱ�ָ������������ж�Ӧ��λ��
**/
#include "stdafx.h"

using namespace std;

//int tmain1(int argc, _TCHAR* argv[])
//{
//	const int fixcol=6;
//	int nRow;
//	cin>>nRow;
//
//	//����һά���ݲ�����ת�ɶ�ά����ָ��
//	int *pp_arr = new int[nRow*fixcol];  
//	int (*p)[fixcol/3] = (int(*)[fixcol/3])pp_arr; 
//
//
//    //Ϊ��ά���鸳ֵ  
//    int i, j, w=1;  
//    for (i = 0; i < nRow; i++)  
//        for (j = 0; j < fixcol; j++)  
//		{    p[i][j] = w++;  
//	cout<<i<<"  "<<j<<"  "<<p[i][j]<<endl;}
//
//      
//    //�����ά����  
//    for (i = 0; i < nRow; i++)  
//    {  
//        for (j = 0; j < fixcol; j++)  
//            cout<<p[i][j]<<setw(5);  
//        putchar('\n');  
//    }  
//
//    //�ͷ���Դ  
//    delete[] pp_arr;  
//	system("pause");
//	return 0;
//}