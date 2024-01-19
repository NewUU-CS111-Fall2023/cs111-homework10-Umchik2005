/*
 * Author:
 * Date:
 * Name:
 */

class Problem9 {
public:
    bool isSatisfied(const vector<vector<string>>& formula, const unordered_map<string, bool>& assignment) {
        for (const vector<string>& clause : formula) {
            bool isClauseSatisfied = false;
            for (const string& literal : clause) {
                string variable = literal[0] == '-' ? literal.substr(1) : literal; 
                bool literalValue = assignment.at(variable);
                bool negated = literal[0] == '-';
                if (literalValue != negated) {
                    isClauseSatisfied = true;
                    break; 
                }
            }
            if (!isClauseSatisfied) {
                return false; 
            }
        }
        return true;
    }
};