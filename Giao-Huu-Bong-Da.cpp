#include <iostream>
#include <vector>


using namespace std;


void enterInput(int n)
{
    int y, x;
    vector<int> result; 
   
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        cin >> y;
        if(x == 0 || y == 0){
            result.push_back(1);
        }else{
           result.push_back(x + y); 
        }
        
    }

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

}


int main()
{
    int n;
    cin >> n;
    enterInput(n);

    return 0;
}