/*
 * Author:
 * Date:
 * Name:
 */

class Problem3 {
public: string FindSum(string s) {
        int head = 0;

        int sum = 0;
        String answer;
        while (true) {
            char symbol =s[head];
            switch (symbol) {
                case '1':
                    if(s[head]!=NULL) {
                        answer[head]+=char;
                    }
                    head++;
                    break;
                case '0':
                    head++;
                    break;

            }
        }
        return answer;
    }
};