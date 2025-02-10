#include <bits/stdc++.h>
#define lli long long
#define pii pair<int,int>
#define fi first
#define sc second
#define EB emplace_back
#define MP make_pair
#define vi vector<int>
#define vov vector<vector<int>>v(n,vector<int> (m))
#define vpii vector<pair<int,int>>
#define all(o) (o).begin(), (o).end()
#define fr(i,n) for(lli i=0;i<n;++i)
#define br(n,i) for(lli i=n;i>=0;--i)
#define vovfr(i,n,m) fr(i,n){fr(j,m){}}
#define rep(i,a,b) for(lli i=a;i<=b;++i)
#define per(i,b,a) for(lli i=b;i>=a;--i)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
const int MOD = 1e9 + 7;
lli inverse(lli x){return (x,(MOD-2));}
lli gcd(lli a, lli b){return b == 0 ? a : gcd(b,a%b);}
lli binpow(lli base, lli expo){
    if(expo == 0)return 1;

    if(expo%2 == 1){
        return (base * binpow(base , expo-1)) % MOD;
    }else{
        lli temp = binpow(base , expo / 2);
        return (temp * temp) % MOD;
    }
}

string numberToWords(lli n)
{
	lli limit = 1000000000000, curr_hun, t = 0;

	if (n == 0)
		return ("zero");
	string multiplier[] = { "", "trillion", "billion",
							"million", "thousand" };
	string first_twenty[] = {
		"",	 "one",	 "two",	 "three",
		"four", "five",	 "six",	 "seven",
		"eight", "nine",	 "ten",	 "eleven",
		"twelve", "thirteen", "fourteen", "fifteen",
		"sixteen", "seventeen", "eighteen", "nineteen"
	};


	string tens[]
		= { "",	 "twenty", "thirty", "forty", "fifty",
			"sixty", "seventy", "eighty", "ninety" };

	
	if (n < 20)
		return (first_twenty[n]);


	string answer = "";
	for (lli i = n; i > 0;
		i %= limit, limit /= 1000) {
		curr_hun = i / limit;

		while (curr_hun == 0) {

		
			i %= limit;


			limit /= 1000;

		
			curr_hun = i / limit;


			++t;
		}

		if (curr_hun > 99)
			answer += (first_twenty[curr_hun / 100]
					+ " hundred ");


		curr_hun = curr_hun % 100;


		if (curr_hun > 0 && curr_hun < 20)
			answer += (first_twenty[curr_hun] + " ");

 
		else if (curr_hun % 10 == 0 && curr_hun != 0)
			answer += (tens[curr_hun / 10 - 1] + " ");

		else if (curr_hun > 20 && curr_hun < 100)
			answer += (tens[curr_hun / 10 - 1] + "-"
					+ first_twenty[curr_hun % 10] + " ");

		if (t < 4)
			answer += (multiplier[++t] + " ");
	}
	return (answer);
}

signed main()
{

	lli n;cin >> n;
	cout << numberToWords(n) << '\n';
}

