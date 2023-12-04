// You are using GCC
#include<iostream>
using namespace std;
int main()
{
    int k = 5, size = 10;
    
    int hashtable[size];
    
    for(int i=0; i<size; i++)
    hashtable[i] = -1;
    
    
    {
        int key = 5;
        
        int index = key*key;
        while(index >= size)
        {
            index = index/10;
            
            if(index >= size)
            {
                int n;
                if(index > 1000) n = 1000;
                else if(index > 100) n = 100;
                else n = 10;
                index = index % n;
                
            }
        }
        
        if(hashtable[index] == -1)
        hashtable[index] = key;
        
        else
        
        {
            while(hashtable[index] != -1)
            {
                index++;
                if(index == 10) index = 0 ;
                
            }
            hashtable[index] = key;
            
        }
        cout << "\nAddress of" << key << "is :" << index;
        
    }
    return 0;
    
}
