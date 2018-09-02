#include <bits/stdc++.h>
#include <math.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    /*
     * Write your code here.
     */
    //int turn_from_first = 0;
    //int turn_from_last  = 0;
    
    float diff_from_first_page = p-1;
    float diff_from_last_page = n-p;
    if(diff_from_first_page == 0 || diff_from_last_page == 0)
        return 0;
    
    if(n % 2 == 0)
    {
        if(diff_from_first_page < diff_from_last_page)
{
            float temp =  ceil((diff_from_first_page/2));
		return temp;
}
        else
            return ceil(diff_from_last_page/2);
    }
    else
    {
        if(diff_from_first_page < diff_from_last_page)
            return ceil(diff_from_first_page/2);
        else
        {
            if((n-1) == p)
                return 0;
            return floor(diff_from_last_page/2);     
        }
    }
}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    cout << result << "\n";

    //cout.close();

    return 0;
}

