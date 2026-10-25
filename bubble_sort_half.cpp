#include<iostream>
using namespace std;
int main (){
    //输入四个数字
    cout<<"Please enter 4 numbers"<<endl;

    int number[4];
    for (int i=0;i<4;i++)
    {
        cin>>number[i];

        cout<<"YOU GET A "<<number[i]<<endl;
    }

    //外层循环，准备删去冒泡的最大值
    for (int i=3;i>0;i--)
    {
        //内层
        for (int j=0;j<i;j++)

        {//逐个换位，把最大值推向最右边
            int x=0;
            if (number[j]>number[j+1])
            {
                x=number[j];
                number[j]=number[j+1];
                number[j+1]=x;
            }
        }
    
    

        
    }

    //输出结果
    cout<<number[0]<<'<'<<number[1]<<'<'<<number[2]<<'<'<<number[3];

    return 0;
}