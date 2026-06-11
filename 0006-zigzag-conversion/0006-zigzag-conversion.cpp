class Solution {
public:
    string convert(string s, int numRows) {
        // string output = "";
        // output.reserve(s.length());

        // if(numRows == 1){
        //     return s;
        // }


        // //string is like this: [row][diagonal][row][diagonal]etc.
        // //len(diagonal == row - 2)


        // for(int i = 0; i < numRows; i++){

        //     int j = i;

        //     while(j < s.length()){
        //         //push back row:
        //         output.push_back(s.at(j));
        //         //to do to diagonal

        //         if(i != 0 && i != numRows -1){
        //             //do diagonal:
        //             int idx = 2* (numRows -1 - i) + j;
        //             if(idx < s.length()){
        //                 output.push_back(s.at(idx));
        //             }
        //         }
        //         j += numRows + (numRows -2);
        //     }
        // }
        // return output;


        // O(n^2) Space
        if (numRows == 1) return s;

        vector<vector<char>> res(numRows);
        int idx = 0, dirn; // 1-down, -1-up

        for (char c: s) {
            res[idx].push_back(c);
            if (idx == 0) {
                dirn = 1;
            } else if (idx == numRows - 1) {
                dirn = -1;
            }

            idx += dirn;
        }

        string out;
        for (const auto& row : res) {
            for (char val : row) {
                // std::cout << val << " ";
                out += val;
            }
            // std::cout << "\n";
        }

        return out;
    }
};