#include<bits/stdc++.h>
using namespace std;

int main(){

    // vector<char> arr = {'a', 'a', 'b', 'a', 'c','b','e','b','e','b','e'};
    string s = "totmtaptat";
    string t = "taat";


    map<char,int> m;
  
    for(auto it:t){
        m[it]++;
    }

    int cnt = m.size();
	int i = 0;
	int j = 0;
	int ans = INT_MAX;
	int start = -1;
	int end = -1;
	while (j < s.length())
	{
		if (m.find(s[j]) != m.end())
		{
			m[s[j]]--;
			if (m[s[j]] == 0)
				cnt--;
		}

		if (cnt == 0)
		{
			ans= min(ans,j-i+1);

			while (cnt == 0)
			{
				if (m.find(s[i]) != m.end())
				{

					if (m[s[i]] == 0 || m[s[i]] < 0)
					{
						m[s[i]]++;
						if (m[s[i]] > 0)
							cnt++;
					}
				}
				i++;
				if (j - i + 1 < ans && cnt == 0)
				{
					start = i;
					end = j;
					ans = j - i + 1;
				}
			}
		}

		j++;
	}
cout<<"\n"<<ans<<"\n";
}
