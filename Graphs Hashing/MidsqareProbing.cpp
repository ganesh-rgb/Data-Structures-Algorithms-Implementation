#include<iostream>
using namespace std;
int main()
{
    int k = 5;
    int size = 10;
    
    int hashtable[10];
    for(int i = 0; i<10; i++)
    hashtable[i] = -1;
    for(int i = 0; i<k; i++)
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
                else if(index > 100)n = 100;
                else n = 10;
                index = index%n;
                
            }
        }
        
        //linear probing//
        
        if(hashtable[index] == -1)
        hashtable[index] = key;
        
        else
        {
            int i = 1, h = index;
            while(hashtable[index] != -1)
            {
                index = h + i*i;
                if(index > 9) index - index % 10;
                i++;
                
                
            }
            hashtable[index] = key;
            
        }
        cout << "\nAddress of"
    }
}
