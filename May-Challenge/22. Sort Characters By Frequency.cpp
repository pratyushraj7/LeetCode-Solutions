class Solution {
public:
    string frequencySort(string s) {
        
        //declare a map and a vector pair to store the "char" and the corresponding
        //number of times (int) it has appeared in the string
        
        unordered_map<char, int> map;
        vector<pair<int, char>> v;
        
        //declare an empty string
        
        string x = "";
        
        
        //store the character and their corresponding number of occurences
        
        for(char c : s)
            map[c]++;
        
        
        //push all the values of map into a vector pair having number of 
        //occurences and character stored respectively
        
        for(auto i : map)
            v.push_back(make_pair(i.second, i.first));
        
        
        //sort the vector and reverse in order to arrange them in descending 
        //order of number of occurences
        
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        
        
        //append the char value in an empty string n times (number of occurences) 
        
        for(auto i : v){
            x += string(i.first, i.second);
        }
        
        
        //return string
        
        return x;
        
    }
};
