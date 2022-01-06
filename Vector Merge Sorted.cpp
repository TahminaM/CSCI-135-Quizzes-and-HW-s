/******************************************************************************

 Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi, Minh Nguyen
Assignment: E 6.20
Description:Write a function vector<int> merge_sorted(vector<int> a, vector<int> b) that merges two sorted vectors to produce a new sorted vector
-Keep an index into each vector, indicating how much of it has been processed already
-Each time, append the smallest unprocessed element from either vector, then advance the index
-Ex: if a is: 1 4 9 16                and b is: 4 7 9 9 11
-Then merge_sorted returns the vector: 1 4 4 7 9 9 9 11 16


*******************************************************************************/

vector<int> merge_sorted(vector<int> a, vector<int> b)

{

    vector<int> ans;
    int i = 0;
    int j = 0;
    
    while(i < a.size() && j < b.size())

    {

        // if the current element of a is smaller the

        // the current element of b

      if(a[i] < b[j])

        {

            ans.push_back(a[i]);

            i++;

        }

        // if the current element of a is greater the

        // the current element of b

        else

        {

            ans.push_back(b[j]);

            j++;

        }

    }

    // add the left elements of a to ans

    for( int i=0; i < a.size() ; i++ )

        ans.push_back(a[i]);

    // add the left elements of b to ans

    for(int j=0; j < b.size() ; j++ )

        ans.push_back(b[j]);

    return ans;

}

int main() {
    vector<int> v1 = {1, 4, 9, 16};
    vector<int> v2 = {4, 7, 9, 9, 11};
    vector<int> vec = merge_sorted(v1, v2);
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}
