#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>

using namespace std;

const int maxMembersPlusOne = 501;
int adjacencyTable[maxMembersPlusOne][maxMembersPlusOne];

int main() {
	int n;
	cin >> n;
	map <string, int> h;
	int startVertex = -1;
	int members = 1;
	for (int i = 0; i < n; i++) {
		string foo;
		vector<string> v(3, foo);
		for (int j = 0; j < 3; ++j) {
			cin >> v[j];
			if (h.find(v[j]) == h.end()) {
				h[v[j]] = members++;
				if (v[j] == "Isenbaev")
					startVertex = h[v[j]];
                //cout << v[j] << ' ' << h[v[j]] << '\n';
			}
		}
		for (int j = 0; j < 3; j++)
			for (int k = j+1; k < 3; k++) {
				adjacencyTable[h[v[j]]][h[v[k]]] = 1;
				adjacencyTable[h[v[k]]][h[v[j]]] = 1;
			}
	}
	//Do a BFS from startVertex.
	vector<int> flag(maxMembersPlusOne, 0), isenbaevNumbers(maxMembersPlusOne, maxMembersPlusOne);
	//Currently at startVertex.
	queue<pair<int, int> > q;
	q.push(make_pair(startVertex, 0));

	while (!q.empty()) {
		pair<int, int> curVertex = q.front();
		q.pop();
		int curVex = curVertex.first;
		int d = curVertex.second;
		if (flag[curVex])
            continue;

		isenbaevNumbers[curVex] = d;
		flag[curVex] = 1;

		for (int i = 0; i < maxMembersPlusOne; i++)
			if (adjacencyTable[curVex][i] == 1 && !flag[i])
				q.push(make_pair(i, d+1));

	}

	for(map<string, int>::iterator it = h.begin(); it != h.end(); it++) {
	    // map keys are arranged lexicographically by default. So just traversing it returns all the names
	    // in lexicographic order.
 	    cout << it->first << ' ';
	    if (isenbaevNumbers[it->second] == maxMembersPlusOne)
            cout << "undefined\n";
        else
            cout << isenbaevNumbers[it->second] << '\n';
	}
	return 0;
}
