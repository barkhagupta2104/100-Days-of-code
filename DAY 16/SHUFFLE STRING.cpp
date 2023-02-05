    string restoreString(string s, vector<int>& indices) {
        
        string g;
        g.resize(s.size());
        for(int i=0;i<indices.size();i++)
        {
             g[indices[i]]=s[i];
        }
        return g;
    }
