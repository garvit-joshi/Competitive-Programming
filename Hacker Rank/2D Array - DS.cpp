#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int max=0;
vector<vector<int> > arrsum( 4 , vector<int> (4, 0));
 for(int i=0;i<4;i++)
 {
     for(int j=0;j<4;j++)
     {
         arrsum[i][j]+=arr[i][j];
         arrsum[i][j]+=arr[i][j+1];
         arrsum[i][j]+=arr[i][j+2];
         arrsum[i][j]+=arr[i+1][j+1];
         arrsum[i][j]+=arr[i+2][j];
         arrsum[i][j]+=arr[i+2][j+1];
         arrsum[i][j]+=arr[i+2][j+2];
     }
 }
 max=arrsum[0][0];
 for(int i=0;i<4;i++)
 {
     for(int j=0;j<4;j++)
     {
         if(max<arrsum[i][j])
         {
             max=arrsum[i][j];
         }
     }
 }
 return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
