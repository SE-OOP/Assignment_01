#include <iostream>
#include<array>
using namespace std;
int cin_arr(array<int,20> &arr)
{
    int num=0;
    int i=0,j=0;
    int flag=0;
    while(i<20)//循环二十次，共输入二十个数
    {
        cin>>num;
        i++;
        flag=0;
        if(num<=100 && num>=10)//检验数据的有效性
        {
            for(int item:arr)//循环判断数据是否重复
            {
                if(num==item)//数据重复，不储存
                {
                   flag=1;
                   break;
                }

            }
            if(flag==0)//数据不重复，并储存
            {
                arr[j]=num;
                j++;
            }
        }
    }
    return j;//返回有效数据个数
}
int main()
{
    array<int,20> arr={0};//声明并初始化
    int number=0;//储存有效数据个数
    int i=0;
    cout<<"Please input ten integers:"<<endl;
    number=cin_arr(arr);//函数调用
    if(number!=0)
    {
        cout<<"The different integers you inputed are following:"<<endl;
        for(i=0;i<number;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
        cout<<"There are "<<20-number<<" integers you inputed is invalid!"<<endl;
    }
    else
    {
        cout<<"All of the integers you inputed is invalid!";
    }

    return 0;
}
