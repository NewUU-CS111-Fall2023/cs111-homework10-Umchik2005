/*
 * Author:
 * Date:
 * Name:
 */

class Problem11 {
public:
    string generate_3sat_formula(int num_variables, int num_clauses) {
        random_device rd;
        mt19937 gen(rd());  // Seed the random number generator
        uniform_int_distribution<> dis(0, num_variables - 1);  // Distribution for variable selection
        uniform_int_distribution<> neg_dis(0, 1);  // Distribution for negation

        string formula = "";
        for (int i = 0; i < num_clauses; ++i) {
            formula += "(";
            for (int j = 0; j < 3; ++j) {
                char variable = 'A' + dis(gen);
                bool is_negated = neg_dis(gen) == 0;
                formula += (is_negated) ? "~" : "";
                formula += variable;
                formula += (j < 2) ? " | " : "";
            }
            formula += ")";
            formula += (i < num_clauses - 1) ? " & " : "";
        }

        return formula;
    }
};