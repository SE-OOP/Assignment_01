#include <iostream>
#include<vector>
using namespace std;
int cin_arr(vector<int> &arr)
{
    int num=0;
    int i=0,j=0;
    int flag=0;
    while(i<20)//循环二十次，共输入二十个数
    {
        cin>>num;
        flag=0;
        i++;
        if(num<=100 && num>=10)//判断数据是否有效
        {
            for(int item:arr)//循环判断数据是否重复
            {
                if(num==item)//数据重复，不储存
                    flag=1;
            }
            if(flag==0)//数据不重复，并储存
            {
                arr.push_back(num);
                j++;
            }
        }
    }
    return j;//返回有效数据个数
}
int main()
{
    vector <int> arr;//声明并初始化
    int number=0;//储存有效数据个数
    int i=0;
    cout<<"Please input ten integers:"<<endl;
    number=cin_arr(arr);//函数调用
    if(number!=0)
    {
        cout<<"The different integers you inputed are following:"<<endl;
        for(int item:arr)
            cout<<item<<" ";
        cout<<endl;
        cout<<"There are "<<20-number<<" integers you inputed is invalid!"<<endl;
    }
    else
    {
        cout<<"All of the integers you inputed is invalid!";
    }

    return 0;
}
