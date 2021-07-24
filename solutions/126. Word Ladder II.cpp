class Solution {
public:
    vector<vector<string>>  ans;    //Stores all possible paths
    
    void DFS(string& beginWord, string& endWord, unordered_map<string, unordered_set<string>>& adj, vector<string> &path) {
        path.push_back(beginWord);  //Push current word
        if(beginWord == endWord)
        {
            ans.push_back(path);
            path.pop_back();
            return;
        }
        for(auto x : adj[beginWord])
            DFS(x, endWord, adj, path);
        
        path.pop_back();    //Pop current word to Backtrack
    }
    
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        unordered_map<string, unordered_set<string>> adj;   //Adjacency List
        unordered_set<string> dict(wordList.begin(),wordList.end());   //Insert WordList in SET
        
        //STEP-1: Find min-depth using BFS
        queue<string> Q;    //For BFS traversal
        Q.push(beginWord);  //Push start node (beginWord)
        unordered_map<string, int> visited; //Key->String (Node)...Value->Level (Depth of traversal)
        visited[beginWord] = 0; //Start node will always be at level 0
        while(!Q.empty())
        {
            string curr = Q.front();
            Q.pop();
            string temp = curr;
            for(int i = 0; i < curr.size(); ++i)    //For all characters
            {
                for(char x = 'a'; x <= 'z'; ++x)    //Try all possible 26 letters
                {
                    if(temp[i] == x)    //Skip if letter is same as in original word
                        continue;
​
                    temp[i] = x;    
