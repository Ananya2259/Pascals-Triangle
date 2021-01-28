 #include <iostream>
using namespace std;

int main()
{
   int n;
   cout << "Enter a Number to print its pascal traingale sequence: "<<endl;
   cin >> n ;
   for (int row = 1; row <= n; row++)
	{
		int A = 1; 

		for (int i = 1; i < (n - row + 1); i++){
			cout << " ";
		}

    cout << A;
		for (int i = 1; i < row; i++)
		{
			A = A * (row - i) / i;  
      cout << " " << A;
		}
            
		cout << "\n";
	}
}