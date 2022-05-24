#ifndef __Wordle__

#include <string>
#include <vector>
#include <iostream>
#include <cstdlib> // srand(), rand()

using namespace std; // this is in fact not recommended in headers

class Wordle {
	string word;
	const char
		hint_green = '@',
		hint_yellow = '*',
		hint_gray = '-';
public:
	Wordle(string _word) : word(_word) {} // note: no default constructor!
	bool isCorrect(string guess);
	string giveHint(string guess);
};


bool Wordle::isCorrect(string guess) {
	return (guess == word);
}

string Wordle::giveHint(string guess) {
	if (guess.size() != word.size()) {
		cout << "\t[Error] Enter a " << word.size() << " letter word!" << endl;
		return "";
	}
	string hint(word.size(), hint_gray); // fill a string with a given character
	for (int i = 0; i < word.size(); i++) {
		for (int j = 0; j < word.size(); j++) {
			// if found in the word, give a yellow hint
			if (guess[i] == word[j]) {
				hint[i] = hint_yellow;
			}
		}
		// but if position is also correct, change to green
		if (word[i] == guess[i]) {
			hint[i] = hint_green;
		}
	}
	return hint;
}
struct WordList {
	static vector<string> word_list;
	string pick_random_word() {
		return word_list[rand() % (word_list.size())];
	}
};
vector<string> WordList::word_list = {
	"abuse",
	"adult",
	"agent",
	"anger",
	"apple",
	"award",
	"basis",
	"beach",
	"birth",
	"block",
	"blood",
	"board",
	"brain",
	"bread",
	"break",
	"brown",
	"buyer",
	"cause",
	"chain",
	"chair",
	"chest",
	"chief",
	"child",
	"china",
	"claim",
	"class",
	"clock",
	"coach",
	"coast",
	"court",
	"cover",
	"cream",
	"crime",
	"cross",
	"crowd",
	"crown",
	"cycle",
	"dance",
	"death",
	"depth",
	"doubt",
	"draft",
	"drama",
	"dream",
	"dress",
	"drink",
	"drive",
	"earth",
	"enemy",
	"entry",
	"error",
	"event",
	"faith",
	"fault",
	"field",
	"fight",
	"final",
	"floor",
	"focus",
	"force",
	"frame",
	"frank",
	"front",
	"fruit",
	"glass",
	"grant",
	"grass",
	"green",
	"group",
	"guide",
	"heart",
	"henry",
	"horse",
	"hotel",
	"house",
	"image",
	"index",
	"input",
	"issue",
	"japan",
	"jones",
	"judge",
	"knife",
	"laura",
	"layer",
	"level",
	"lewis",
	"light",
	"limit",
	"lunch",
	"major",
	"march",
	"match",
	"metal",
	"model",
	"money",
	"month",
	"motor",
	"mouth",
	"music",
	"night",
	"noise",
	"north",
	"novel",
	"nurse",
	"offer",
	"order",
	"other",
	"owner",
	"panel",
	"paper",
	"party",
	"peace",
	"peter",
	"phase",
	"phone",
	"piece",
	"pilot",
	"pitch",
	"place",
	"plane",
	"plant",
	"plate",
	"point",
	"pound",
	"power",
	"press",
	"price",
	"pride",
	"prize",
	"proof",
	"queen",
	"radio",
	"range",
	"ratio",
	"reply",
	"right",
	"river",
	"round",
	"route",
	"rugby",
	"scale",
	"scene",
	"scope",
	"score",
	"sense",
	"shape",
	"share",
	"sheep",
	"sheet",
	"shift",
	"shirt",
	"shock",
	"sight",
	"simon",
	"skill",
	"sleep",
	"smile",
	"smith",
	"smoke",
	"sound",
	"south",
	"space",
	"speed",
	"spite",
	"sport",
	"squad",
	"staff",
	"stage",
	"start",
	"state",
	"steam",
	"steel",
	"stock",
	"stone",
	"store",
	"study",
	"stuff",
	"style",
	"sugar",
	"table",
	"taste",
	"terry",
	"theme",
	"thing",
	"title",
	"total",
	"touch",
	"tower",
	"track",
	"trade",
	"train",
	"trend",
	"trial",
	"trust",
	"truth",
	"uncle",
	"union",
	"unity",
	"value",
	"video",
	"visit",
	"voice",
	"waste",
	"watch",
	"water",
	"while",
	"white",
	"whole",
	"woman",
	"world",
	"youth"
};

#endif // !__Wordle__
