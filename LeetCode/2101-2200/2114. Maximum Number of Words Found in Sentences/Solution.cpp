class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0;
        for(int i=0; i<sentences.size(); i++) {
            int temp=0;
            for(int j=0; j<sentences[i].length(); j++) {
                if(sentences[i][j] == ' ' || sentences[i][j]=='\0')
                    temp++;
            }
            if(temp > max)
                max = temp;
        }
        return max+1;
    }
};