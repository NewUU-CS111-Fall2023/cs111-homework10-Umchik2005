/*
 * Author:
 * Date:
 * Name:
 */

class Problem7 {
public:int minimumRabbits(vector<int>& answers) {
        int minRabbits = 0;
        unordered_map<int, int> answerCounts;

        for (int answer : answers) {
            answerCounts[answer]++;
        }

        for (auto& [answer, count] : answerCounts) {
            if (answer == 0) {
                minRabbits += 1;
            } else {
                minRabbits += answer + (count - 1) / (answer + 1) * (answer + 1);
            }
        }

        return minRabbits;
    }
};