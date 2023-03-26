#include<bits/stdc++.h>

using namespace std;
// Returns 'true' if the character is a DELIMITER.
bool isDelimiter(char ch)
{
	if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' ||
	        ch == '/' || ch == ',' || ch == ';' || ch == '>' ||
	        ch == '<' || ch == '=' || ch == '(' || ch == ')' ||
	        ch == '[' || ch == ']' || ch == '{' || ch == '}')
		return (true);
	return (false);
}

// Returns 'true' if the character is an OPERATOR.
bool isOperator(char ch)
{
	if (ch == '+' || ch == '-' || ch == '*' ||
	        ch == '/' || ch == '>' || ch == '<' ||
	        ch == '=')
		return (true);
	return (false);
}


void parse() {

	vector<string> lines;
	string line;
	while (getline(cin, line))
		lines.push_back(line);

	vector<string> words;

	bool isFoundQ = 0;

	for (string line : lines)
	{
		string l = "";
		for (int i = 0; i < (int) line.size(); i++)
		{
			char c = line[i];
			if (isDelimiter(c) && !isFoundQ)
			{
				if ((c == '+' || c == '-') && i - 1 > 0 && line[i - 1] == 'E' && (line[i - 2] - '0' >= 0 && line[i - 2] - '0' <= 9)) {
					l += line[i];
					continue;
				}
				if (l != "")
					words.push_back(l);

				if (c != ' ')
				{
					l = c;

					if (isOperator(c)) {
						i++;
						if (i < (int)line.size() && line[i] != ' ' && isOperator(line[i]))
						{
							l += line[i];
						} else {

							i--;
						}

					}
					words.push_back(l);
				}
				l = "";
			}
			else
			{
				if (c == '"' && !isFoundQ) {
					isFoundQ = 1;

					l += c;
				}
				else if (c == '"' && isFoundQ) {
					isFoundQ = 0;

					l += c;
					words.push_back(l);
					l = "";

				} else {

					l += c;
				}
			}
		}

		if (l != "")
			words.push_back(l);
	}

	cout << "Total Number of tokens: " << words.size() << endl;
	cout << "Tokens are: " << endl;

	for (auto word : words) {
		cout << word << endl;
	}

}


int main()
{
	freopen("input.txt", "r", stdin);
    parse();

	return (0);
}