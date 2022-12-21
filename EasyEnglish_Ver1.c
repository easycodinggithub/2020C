// �ּ� �� ��������


#define _CRT_SECURE_NO_WARNINGS // scanf ��� ���� 

#define LEFT 75 // ���� ȭ��ǥ ( �� ) �� �ƽ�Ű �ڵ� ���� 

#define RIGHT 77 // ������ ȭ��ǥ ( �� ) �� �ƽ�Ű �ڵ� ���� 

#include <windows.h> // console â ���� 

#include <stdio.h> 

#include <stdlib.h>

#include <time.h> // �ð� ���� �Լ� ����

#include <string.h> // ���ڿ� ���� ����

// ���� ����� �ʿ�

#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")


// ---------- Basic �迭 ----------


// Basic_Word �ܾ� �迭  

char Basic_Word[50][20][100] = {

	// 1 ~ 10 DAY

	{"water", "job", "anyway", "depart", "item", "advice", "cover", "fix", "god", "grade", "hit", "judge", "kick", "prize", "race", "stone", "vase", "wall", "have", "good"},
	{"animal", "busy", "captain", "e-pal", "everyone", "friend", "fun", "like", "live", "math", "May", "music", "name", "nice", "nickname", "old", "pretty", "science", "sea", "shore"},
	{"river", "alley", "surprise", "gulf", "else", "fresh", "bring", "build", "without", "cover A with B", "should", "rich", "walk", "anywhere", "different", "bike", "complain", "dance", "early", "enjoy"},
	{"happy", "leave", "long", "near", "sing", "sometimes", "subway", "talk", "anxious", "get on", "then", "time", "where", "write", "forgive", "friendship", "photo", "difficult", "share", "have difficulty (in) ~ing"},
	{"advise", "friendly", "funny", "mathematics", "might", "musician", "want", "be good at", "be(am,are,is) like", "live without", "scientific", "seashore", "complaint", "nearby", "singer", "photographer", "difficulty", "be named after", "would like to", "be surprised to"},
	{"surf", "only", "help", "bake", "baseball", "basketball", "cartoon", "add", "sell", "get together", "club", "cooking", "delicious", "draw", "fold", "fortune", "guiter", "make", "mix", "be worried about"},
	{"movie", "president", "soccer", "start", "thing", "together", "visit", "watch", "shock", "write down", "worry", "last", "subject", "decide", "desert", "example", "join", "stuff", "yard", "right now"},
	{"big", "black", "brown", "favorite", "female", "food", "hair", "interesting", "straw", "in person", "hard", "leg", "lizard", "person", "pet", "small", "spider", "strange", "town", "for example"},
	{"turtle", "cook", "rose", "human", "lesson", "pole", "title", "idea", "touch", "sunny", "toy", "way", "arm", "believe", "camera", "carry", "clean", "command", "cry", "give ~ a hand"},
	{"visitor", "decision", "yard sale", "male", "personal", "weather", "stranger", "hardworking", "at last", "have an idea for", "believable", "personality", "human being", "not only A but also B", "B as well as A", "carry out", "clean up", "do one's homework", "leave for", "talk about"},

	// 11 ~ 20 DAY

	{"factory", "gift", "homework", "laugh", "newspaper", "phone", "read", "real", "also", "of course", "robot", "strong", "swim", "violin", "well", "cold", "danger", "beautiful", "dentist", "headmaster"},
	{"num", "picture", "ride", "something", "stick", "stop", "zebra", "arrive", "always", "on foot", "between", "block", "book", "everything", "hospital", "island", "left", "park", "get to", "next to"},
	{"right", "south", "stay", "straight", "turn", "golden", "kind", "piece", "anything", "a kind of", "run", "really", "afraid", "blind", "childhood", "gain", "intternational", "mean", "means", "be ready to"},
	{"sad", "sight", "smell", "gather", "honey", "pilot", "ready", "tent", "base", "inexpensive", "button", "easy", "never", "problem", "round", "send", "shine", "soft", "sound", "send A to B"},
	{"laughter", "reader", "realistic", "dangerous", "beauty", "southern", "lower", "stick to", "stop by", "arrive at", "trip", "kindness", "sadness", "meaning", "sightseeing", "easily", "enter", "minute", "sleep out", "talk about"},
	{"bad", "cloud", "low", "menu", "against", "agree", "debate", "get", "glove", "go on a picnic", "son", "collect", "festival", "half", "pray", "since", "still", "style", "for fun", "one another"},
	{"treat", "western", "around", "doubt", "enough", "fat", "fire", "general", "price", "all over the world", "fond", "salt", "shake", "shape", "spend", "try", "lend", "cage", "material", "vet"},
	{"afterlife", "because", "destroy", "die", "heavy", "hole", "huge", "inside", "life", "come down from", "safe", "steal", "therefore", "almost", "ask", "burn", "fly", "forever", "however", "lose"},
	{"poem", "wrong", "eat", "along", "glue", "image", "insect", "needle", "alone", "take measures", "battery", "change", "charity", "count", "hurt", "once", "plant", "recycle", "slip", "such"},
	{"badly", "cloudy", "treatment", "firewood", "generally", "salty", "collection", "low-fat", "agree with", "get in", "dying", "lifelong", "safety", "poet", "recycling", "in shape", "shake hands with", "anything wrong", "ask for", "eat out"},

	// 21 ~ 30 DAY

	{"whole", "shop", "think", "begin", "celebrate", "important", "invite", "meal", "plan", "so", "wear", "slow", "nurse", "sleep", "servant", "wind", "hand", "other", "place", "give A a big hand"},
	{"take", "too", "work", "besides", "bless", "mind", "pain", "practice", "proverb", "give up", "smoke", "stucture", "village", "address", "school", "biologist", "chat", "click", "take apart", "all kinds of, all sorts of, all types of"},
	{"co-host", "conversation", "cool", "correct", "e-mail", "foreign", "hope", "include", "from A to B", "hang out with", "marine", "people", "plane", "repeat", "summarize", "understand", "whale", "actor", "ladder", "especially"},
	{"fax", "future", "garage", "multimedia", "present", "protect", "recipe", "strict", "site", "hope to", "umbrella", "another", "any", "call", "each", "find", "learn", "letter", "listen", "go down"},
	{"shopkeeper", "thought", "beginning", "invitation", "sleepy", "serve", "protection", "plan to", "so far", "at hand", "painful", "biology", "correctly", "foreigner", "hopeless", "futurology", "entrance", "work out", "call out", "listen to"},
	{"beside", "clear", "dish", "handicapped", "loud", "sign", "snake", "space", "special", "story", "thirsty", "upset", "worth", "answer", "anyone", "become", "complete", "course", "dialogue", "goal"},
	{"intonation", "lady", "match", "model", "ocean", "root", "score", "teamwork", "bargain", "a lot of", "concert", "hang", "marathon", "popular", "ton", "waste", "bird", "just", "paper", "not ~any more"},
	{"side", "street", "use", "warm", "accept", "addition", "alarm", "bath", "choice", "used to", "contest", "expensive", "forget", "gentle", "handsome", "happen", "heart", "useless", "warmhearted", "as much as"},
	{"if", "opinion", "poor", "stress", "stupid", "wallet", "balloon", "bean", "below", "cut in", "cut", "dream", "excite", "experiment", "form", "interview", "link", "magic", "nothing", "in a row"},
	{"loudly", "signal", "snakebite", "spaceship", "completely", "side dish", "useful", "warm-up", "pot", "in addition", "row", "ruin", "soil", "bat", "candle", "glasses", "office", "stressful", "go on", "on time"},

	// 31 ~ 40 DAY

	{"fast", "group", "grow", "habit", "land", "middle", "midnight", "point", "restaurant", "write back", "war", "airport", "bark", "cute", "full", "liberty", "mostly", "mug", "parents", "public"},
	{"remember", "respect", "rest", "publish", "alike", "dice", "ending", "exam", "all the time", "get money", "mark", "often", "pimple", "underline", "university", "blouse", "bowl", "dough", "know ~ by heart", "take ~hand"},
	{"flour", "official", "oven", "pat", "powder", "prepare", "roll", "sift", "soda", "take out", "temperature", "tray", "exercise", "hot", "rock", "second", "soldier", "spring", "state", "at the end of"},
	{"bucket", "cheap", "coupon", "doggie", "empty", "energy", "few", "flea", "hold", "for a second", "hurry", "list", "market", "sale", "save", "sneakers", "necessary", "veranda", "among", "blond(e)"},
	{"growth", "midterm", "fully", "respectable", "examination", "preparation", "statement", "salesman", "grow up", "hurry up", "unnecessary", "clothing", "community", "country", "curve", "experience", "goods", "order", "possible", "product"},
	{"shelter", "index", "bonfire", "climb", "compass", "diary", "equipment", "forest", "maybe", "by oneself", "memory", "path", "teammate", "vacation", "view", "art", "bottle", "check", "large", "be late for"},
	{"late", "leaf", "most", "backpack", "bookstore", "camp", "creek", "front", "medical", "had better", "outside", "own", "pack", "paint", "rice", "sharp", "skit", "temple", "look like", "take a picture"},
	{"top", "towel", "wake", "certain", "fair", "operate", "period", "senior", "true", "from now on", "ugly", "volunteer", "both", "continue", "elf", "neighbor", "patient", "skirt", "go wrong", "say to oneself"},
	{"holiday", "broker", "earth", "jump", "keep", "machine", "queen", "realize", "at first", "be able to", "ring", "romance", "rush", "suddenly", "wait", "care", "fur", "gray = grey", "go back", "keep ~ing"},
	{"unbelievable", "enlarge", "lately", "medicine", "owner", "package", "painting", "sharply", "check out", "on one's own", "certainly", "fairly", "operation", "truth", "neighborhood", "earthquake", "quake", "romantic", "wait for", "care about"},

	// 41 ~ 50 DAY

	{"loving", "pouch", "report", "surprising", "amazing", "divide", "even", "loyal", "parrot", "head for", "reason", "responsible", "scream", "topic", "age", "away", "bear", "buy", "careful", "take care of"},
	{"close", "hundred", "thousand", "weekend", "advertise", "brand", "chew", "deceive", "on weekends", "at the same time", "fact", "famous", "follow", "magazine", "message", "product", "recommend", "same", "in order to", "not~at all"},
	{"sentence", "simple", "technique", "circle", "dressing", "medium", "brain", "dandelion", "dimension", "look at", "distance", "dot", "honest", "measure", "sense", "trend", "usually", "ground", "matter", "make sense"},
	{"set", "soon", "step", "teach", "century", "colored", "during", "emperorr", "fight", "to be honest", "frame", "hide", "history", "invent", "powder", "result", "secret", "symbol", "trial", "put on"},
	{"surprised", "responsibility", "carefully", "advertisement", "following", "production", "simply", "world-famous", "be divided up into", "thousands of", "circular", "depth", "distant", "honesty", "length", "sensitive", "tape measure", "symbolize", "secretary", "invention"},
	{"goose", "tremble", "spark", "tumble", "adjust", "airline", "already", "boss", "confuse", "be proud of", "coworker", "flight", "genius", "informal", "introduce", "mistake", "similar", "catch", "dark", "tired"},
	{"wash", "proud", "firework", "ghost", "harvest", "monster", "past", "quarter", "trick", "a number of", "trouble", "company", "educate", "main", "spicy", "terrible", "calendar", "coast", "from door to door", "as far as"},
	{"ever", "everywhere", "expect", "grass", "graze", "language", "meter", "neither", "outback", "at that time = at the time", "peninsula", "rain forest", "return", "someday", "type", "wish", "drive", "kill", "lake", "fall down"},
	{"post", "sure", "area", "ash", "bury", "except", "fall", "flood", "pattern", "in a few seconds", "volcano", "predict", "board", "delay", "excuse", "fasten", "gate", "open-air", "please", "look for"},
	{"confused", "similarity", "darkness", "interested", "companion", "education", "grasshopper", "surely", "adjust to", "make a mistake", "volcanic", "prediction", "blackboard", "pleasant", "meadow", "catch one's eye", "fall in love with", "wash away", "be in trouble", "make sure that"}

};

// Basic_Meaning �ܾ� �� �迭 

char Basic_Meaning[20][20][10000] = {

	// 1 ~ 10 DAY

	{"[��] ���� �ִ� / [��] ��", "[��] ��, ����", "[��] ��·��, �ƹ�ư, �ᱹ", "[��] ������, ����ϴ�, �����", "[��] �׸�, ǰ��, �Ź� ���", "[��] ���, ����", "[��] ����, �����, �����ϴ�, �����ϴ�, �����ϴ� / [��] ����", "[��] ��ġ��, �����ϴ�, ������Ű��", "[��] ��, �ϳ���, ������", "[��] ����� �ű��, �����ϴ� / [��] ����, ���, ���, �г�", "[��] ������, ġ�� / [��] ħ, Ÿ��, ���", "[��] �Ǵ��Ѵ�, �����Ѵ� / [��] ���ǰ�, �ǻ�, ����", "[��] ����, �Ⱦ����� / [��] ����", "[��] ��, ��ǰ, ��ǰ", "[��] �����ϴ� / [��] ����, ����", "[��] ��, ������, ���� / [��] ���� ������", "[��] �ɺ�", "[��] ��, ��", "[��] ������ �ִ�, �����ϴ�", "[��] ����, ����, ģ���� / [��] ����, �ҿ�"},
	{"[��] ����, ����", "[��] �ٻ�, ��ȭ��, (��ȭ)��ȭ����", "[��] ��, ��θӸ�, ����", "[��] �̸��� ģ��", "[��] ���, ��� ���", "[��] ģ��, ��", "[��] ���, ��ſ� / [��] ��� �ִ�, ��ſ�, ������", "[��] �����ϴ� / [��] ~�� ����, ~ó��", "[��] ���, ��� �ִ� / [��] ����ִ�, ������, �������", "[��] ����", "[��] 5 ��", "[��] ����", "[��] �̸�, �� / [��] �̸��� ���̴�, ����ϴ�", "[��] ����, ģ����, ����", "[��] ����, ��Ī", "[��] ���� ����, ~����", "[��] ����, �Ϳ��� / [��] ��, �����, �ſ�", "[��] ����", "[��] �ٴ�", "[��] ����, �ؾ�, ����"},
	{"[��] ��, ��õ", "[��] ���ֱ�, ���, ���� ��", "[��] ���� �ϴ� / [��] ���, ���", "[��] ��, ��, ������ ƴ", "[��] �׹���, �ٸ� / [��] �׹ۿ�, �޸�", "[��] ���ο�, �ż���", "[��] ��������, ��������, �ʷ��ϴ�", "[��] ����, �����ϴ�, �׾ƿø���", "[��] ~�� ����, ~�� ����", "A�� B�� ����", "[��] ~�ؾ� �Ѵ�, ~�� ���̴�", "[��] ������, ǳ����", "[��] �ȴ�, ��å�ϴ� / [��] ��å", "[��] ������, �ƹ�����, ��򰡿�", "[��] �ٸ�, ������", "[��] ������", "[��] �����ϴ�, �����Ÿ���, ȣ���ϴ�", "[��] ���ߴ� / [��] ��, ����", "[��] �̸�, �ʱ��� / [��] ������", "[��] ����"},
	{"[��] �ູ��, ���", "[��] ������, ������ �δ�, ���ܵδ�", "[��] ��, ���� �ɸ���", "[��] ������ / [��] �����", "[��] �뷡�ϴ�, �θ���", "[��] ���δ�, ����, ������", "[��] (�̱�) ����ö, (����) ���ϵ�", "[��] ���ϴ�, �̾߱��ϴ� / [��] �̾߱�", "[��] �����ϴ�, �����ϴ�, �����ϴ�", "���� Ÿ��", "[��] �׶���, �� ������, �׸��� ����, �׷���", "[��] �ð�, �Ⱓ, �ϻ�, �� / [��] �ð��� ���, �ñ⿡ ���ߴ�", "[��] ���, ���, ��𿡼�", "[��] ����, ���� ����, ������ ����", "[��] �뼭�ϴ�", "[��] ����, ���", "[��] ���� / [��] ������ ���", "[��] �����, ����, �����", "[��] �Բ� ������, �д��ϴ�, �����ϴ� / [��] ��, �й�", "~�ϴµ� ������� �ִ�"},
	{"[��] ����ϴ�, �����ϴ�, �ǰ��ϴ�", "[��] ģ����, ģ��", "[��] �����, ����ִ�, �ͻ����", "[��] ����", "[��] (������ may �� ������) ~������ �𸥴�, ~�ص� ���� / [��] ��", "[��] ���ǰ�", "[��] ���ϴ�", "~�� �ͼ��ϴ�, ~�� ���ϴ�", "~�� ����, ~�� ����", "~���� ���", "[��] ��������, ������", "[��] �ؾ�, �غ�, �ٴ尡", "[��] ����, �Ҹ�", "[��] ����� / [��] �����̿�, ��ó��", "[��] ����", "[��] ������, �����۰�", "[��] �����, ���", "~�̸��� ���� ����", "~�ϰ� �ʹ�", "~�ϰ�� ����"},
	{"[��] ������ �˻��ϴ�, �ĵ�Ÿ�⸦ �ϴ�", "[��] ������, �� �ϳ����� / [��] ����, ����", "[��] ����, �����ִ� / [��] ����, ����", "[��] ����, ���� ����", "[��] �߱�, �߱���", "[��] ��, �󱸰�", "[��] ��ȭ, ��ȭ��ȭ", "[��] ���ϴ�, �߰��ϴ�, ���ٿ� ���ϴ�, ��ġ��", "[��] �ȴ�, �Ǹ��ϴ�, �ȸ���", "���̴�, ������", "[��] ���, Ŭ��, ���Ƹ� / [��] ������� ������", "[��] �丮", "[��] ���ִ�, ������", "[��] �׸���, ���� ����, �̴�", "[��] ����, ����, ���θ���", "[��] ��, ���, ���, ��", "[��] ��Ÿ", "[��] �����, �ϰ��ϴ�, ��Ű��", "[��] ����, ���̴�, �������� ������, ȥ���ϴ� / [��] ȥ��", "~�� ���� �����ϴ�"},
	{"[��] ��ȭ", "[��] �����, ����, ȸ��, ����", "[��] �౸", "[��] �����ϴ�, ����ϴ� / [��] ����, ���", "[��] ����, ��, ��", "[��] �Բ�, ����", "[��] �湮�ϴ� / [��] �湮", "[��] ���Ѻ���, �����ϴ�, �ֽ��ϴ�, ������ / [��] �ո�ð�", "[��] ���, ��ũ / [��] ����� �ִ�, ��¦ ���� �ϴ�", "����δ�, ����ϴ�, ��δ�", "[��] ������Ű��, �����ϴ�, �� �¿��, ����ϴ� / [��] ����, �ٽ�", "[��] ������, ��������, ���� / [��] �����ϴ�, ����ϴ�", "[��] ����, ����", "[��] �����ϴ�, ����ϴ�", "[��] �縷", "[��] ��, ����", "[��] �����ϴ�, �����ϴ�, �����ϴ�", "[��] ���, ���� / [��] ä���, ä�� �ִ�, ���� ä���", "[��] ����, ��", "����, ��ٷ�, ���� ����"},
	{"[��] ū, �ߴ���", "[��] ����, ������ / [��] ����, ���� ��, ����", "[��] ������ / [��] ����", "[��] ���� �����ϴ�, �ſ� �����ϴ�, ������ ��� / [��] �����ϴ� ���", "[��] ����, ���� / [��] ������, ������", "[��] ����", "[��] �Ӹ�ī��, ��, �Ӹ���", "[��] ����ִ�, ��� �ִ�", "[��] ��¤, ¤, ����", "������ ����, ����, ����", "[��] ����, �ܴ���, �����, ���� / [��] ����, �ܴ���, ������", "[��] �ٸ�", "[��] ������", "[��] ���, ����, �ΰ�", "[��] �ֿϵ���", "[��] ����, ����", "[��] �Ź�", "[��] �̻���, ����, �𸣴�", "[��] ��, ����, ��ȸ��", "���� ���, ���� ���ڸ� = (for instance)"},
	{"[��] �ź�", "[��] �丮�ϴ� / [��] �丮��", "[��] ���", "[��] �ΰ���, �����, �ΰ��ٿ� / [��] ���, �ΰ�, �η�", "[��] �а�, ����, ����", "[��] �����, ���, ���, ��(����, �ϱ�)", "[��] ����, ǥ��, ����, ��Ī", "[��] ����, �̳�, ����, ���̵��", "[��] �ǵ帮��, ������, �����ϴ� / [��] ����, ���� ��, ����", "[��] �����ٸ�, �ذ� ��ġ��", "[��] �峭��", "[��] ���, ��", "[��] ��, ���� / [��] �����Ű��", "[��] �ϴ�, �ŷ��ϴ�, ~��� �����ϴ�", "[��] ī�޶�", "[��] ������ ����, ������, ����ϴ�, ���ϴ�, �����ϴ�", "[��] ������, û���� / [��] û���ϴ�, û���ϰ� �ϴ�", "[��] ����ϴ�, �����ϴ� / [��] ���, �����", "[��] ���, ��ġ�� / [��] ����, ���¢�� �Ҹ�", "�����ִ�, ����"},
	{"[��] �湮��, �մ�", "[��] ����, ���, ��ܷ�", "[��] �������, �Ŷ��� ����", "[��] ����, ���� / [��] ������, ������", "[��] ������", "[��] ����", "[��] ���� ���, �𸣴� ���, ������ ���", "[��] �ٸ���", "��ħ��, ��������", "~�� ���� �����ϴ�", "[��] ���� �� �ִ�", "[��] ����, ����", "[��] �ΰ�", "A�Ӹ� �ƴ϶� B�� ����������", "A�Ӹ� �ƴ϶� B�� ����������", "�����ϴ�, �����ϴ�, �����ϴ�", "������ ġ���, û���ϴ�", "������ �ϴ�", "~�� ���� ������", "~�� ���� �̾߱⸦ ������"},

	// 11 ~ 20 DAY

	{"[��] ����", "[��] ����, Ÿ�� ���, ���", "[��] ����", "[��] ���� / [��] ����", "[��] �Ź�", "[��] ��ȭ�ϴ�, ��ȭ�� �ɴ� / [��] ��ȭ, ��ȭ��", "[��] �д�, �����ϴ�", "[��] ��¥��, ������, ������", "[��] ����, ����, ����������", "����, �翬��", "[��] �κ�, �����ΰ�", "[��] ����, ưư��, ���� ��", "[��] �����ϴ�, ���ġ�� / [��] ����", "[��] ���̿ø�", "[��] ��, �Ǹ��ϰ�, �ɼ��ϰ� / [��] �칰", "[��] �߿�, ��, �ô��� / [��] ����, �ñ�, ����", "[��] ����", "[��] �Ƹ��ٿ�", "[��] ġ�� �ǻ�", "[��] ���� ������"},
	{"[��] ����", "[��] �׸�, ����", "[��] ���� Ÿ��, Ÿ��, Ÿ���� / [��] Ž, �¿�", "[��] �����ΰ�, � ��, � �� / [��] �߿��� ���, �߿��� ��, � ��", "[��] �����, ������ / [��] ���, ���̴�", "[��] ���ߴ�, ���߰��ϴ�, ��ġ�� / [��] ����, ������", "[��] ��踻", "[��] �����ϴ�", "[��] ��, �׻�, ������", "�ɾ, ������", "[��] ~���̿�, �߰���", "[��] ���, ���, ���� / [��] ����, �����ϴ�", "[��] å, ��, ��� / [��] �����ϴ�, �����ϴ�", "[��] �����̵���, ��� / [��] ���� ������ ��, ���� �߿��� ��", "[��] ����", "[��] ��", "[��] ���ʿ�, ��", "[��] ���� / [��] �����ϴ�", "~�� �����ϴ�", "~����"},
	{"[��] ����, �ٸ�, ������, ������ / [��] �Ǹ�, �α�", "[��] ��, ����, ���� / [��] ������, ���ʿ� �ִ�", "[��] �ӹ�����, ü���ϴ�, ~�� ���� / [��] �ӹ���, ü��", "[��] ����, ��������, �ȹٷ� �� / [��] �ȹٷ�, ���������� / [��] �ݵ���, ������", "[��] ����, ������, ȸ���ϴ� / [��] ȸ��, ��ȯ", "[��] ����, �ݺ���, ������", "[��] ģ���� / [��] ��, ����", "[��] ����, ����, �Ϻκ�, ����", "[��] �����̵�, �ƹ��͵�, ���� / [��] ���� ��, �߿��ѻ��, �߿��� ��", "������, �̸���, ~�� ����", "[��] �޸���", "[��] ������, ������, ������", "[��] �η����Ͽ�, �����Ͽ�, �������Ͽ�", "[��] ����, �͸�����, �����, �͸�����", "[��] � ����, �������", "[��] ���, ����, ȹ���ϴ�, �Լ��ϴ� / [��] �̵�, ����, ����", "[��] ������, ��������", "[��] �ǹ��ϴ�, �ǵ��ϴ� / [��] ����, �λ���, �ɼ�����", "[��] ����, ���, ���", "~�� �غ� �Ǿ��ִ�"},
	{"[��] ����, ��ó�ο�", "[��] �þ�, �÷�, ����Ÿ�, ǳ��, ���� / [��] �߰��ϴ�, ã�Ƴ���", "[��] ���� �ô�, ������ ���� / [��] ����, �İ�", "[��] ������, ���̴�", "[��] ��, ����, ����", "[��] ������, ���Ϸ�, �ȳ���", "[��] �غ� ��, �غ��, �ż���, �Ｎ��", "[��] ��Ʈ", "[��] ���, ����, ���� / [��] ~�� ���ʸ� �δ�", "[��] ����� ���� ���� �ʴ�, ��, ������", "[��] ����", "[��] ����, ������, ����, �ȶ���", "[��] ����~�ʴ�, ������~����", "[��] ����", "[��] �ձ�, ������ / [��] �ձ� ��, ��ȯ, Ⱥ�� / [��] ���� / [��] ~���� / [��] ~�� ����", "[��] ������, ����� ������", "[��] ������, ��¦�̴�, ���θ� �۴�, ���� ����", "[��] �ε巯��, ��ȭ��", "[��] �Ҹ�, ���� / [��] �Ҹ�������, ~�ϰ� �鸮�� / [��] ������, �ǰ���", "A�� B���� ������"},
	{"[��] ����, �����Ҹ�", "[��] ����, ������", "[��] ��������, ����������, �������", "[��] ������, ���·ο�", "[��] �Ƹ��ٿ�, ��, �Ǹ��� ��", "[��] ������", "[��] ����, �Ʒ���, �ϱ���, ������ / [��] ���ߴ�, ������", "����ϴ�, �鷯�ٴ�, �����ϴ�", "��� �鸣��, �湮�ϴ�", "~�� �����ϴ�", "[��] ����, ���� / [��] �ɷ� �Ѿ�����", "[��] ģ��, ģ���� ����", "[��] ����", "[��] �ǹ�, ��, ����, �߿伺", "[��] ����", "[��] ����", "[��] ����, �����ϴ�", "[��] �� / [��] �̼���, ����", "�ۿ��� �ڴ�, �ܹ��ϴ�", "~�� ���� �̾߱⸦ ������"},
	{"[��] ����, �ҷ���, �طο�", "[��] ����", "[��] ����, õ�� / [��] ����", "[��] �޴�, ����ǥ, �Ĵ�ǥ", "[��] ~�� �ݴ��Ͽ�, ~�� �Ž�����", "[��] �����ϴ�, �³��ϴ�, �ǰ��� ��ġ�ϴ�", "[��] ���, ����, ���� / [��] ����ϴ�, �����ϴ�, �����ϴ�", "[��] ���, ���, �����ִ�", "[��] �尩, �۷���", "��ǳ�� ����", "[��] �Ƶ�", "[��] �����ϴ�, ������", "[��] ��ġ, ����", "[��] ��, ����, 2���� 1", "[��] �⵵�ϴ�, ����, ����ϴ�", "[��] ~�̹Ƿ�, ~�̱� ������, ~�̷���", "[��] ������, ������ / [��] ������, �����, �������� �ʴ�", "[��] ��Ÿ��, ����, ���, ǥ�����, ���", "��̷�, �峭����", "���μ���"},
	{"[��] �ٷ��, ġ���ϴ�, �����ϴ� / [��] ���, ���γ���", "[��] ������, ������", "[��] ������, ��濡, �� ���Ƽ� / [��] ~������, ~�� �ѷ��ΰ�", "[��] �ǽ��ϴ�, ������ ����� / [��] �ǽ�", "[��] �����, �ʿ��� ��ŭ�� / [��] ����� / [��] ���(�� ��, ��)", "[��] ����, ������ ���� / [��] ����", "[��] ��, ȭ�� / [��] ���� ������, �ذ��ϴ�, �߻��ϴ�", "[��] �Ϲ�����, ��������, �������� / [��] �屺", "[��] ��, ����, �ü� / [��] ���� �ű��, ���ϴ�", "�� ���迡 ����, �� ����, �� ���迡��", "[��] �����ϴ�, ���ٿ�, ������", "[��] �ұ� / [��] �ұ��� ġ��", "[��] ��鸮��, ����, ����, ������Ű��", "[��] ���, ����, �ǰ�����, ���� / [��] ����� �����ϴ�, ��üȭ�ϴ�", "[��] ����, �Һ��ϴ�, �����ϴ�", "[��] ����ϴ�, �õ��ϴ� / [��] ���, �õ�", "[��] �����ִ�", "[��] ����, �츮", "[��] ���, ����, ����", "[��] ���ǻ�"},
	{"[��] ����, ����", "[��] �ֳ��ϸ�, ~ ������", "[��] �ı��ϴ�, �ĸ��Ű��, �ջ��Ű��, ��ġ��", "[��] �״�, ����ϴ�", "[��] ���ſ�, ����", "[��] ����, ƴ", "[��] �Ŵ���, ������", "[��] ���ο� �ִ�, ������, ������ / [��] ���ο�, ���鿡, ���ʿ�, �ǳ�����", "[��] ����, ��Ȱ, �ϻ�, ��", "~�κ��� ��������", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""}
};

// Basic_Example_Word �ܾ� ���� �迭

char Basic_Example_Word[10][20][10000] = {
	{"Water the plants.", "He got a part-time job.", "Anyway, thanks for helping me.", "He will depart Korea for China tomorrow.", "a news item", "This is my advice to you.", "She covered a child with a blanket.", "He knows how to fix it.", "I believe that there is no God.", "Are you in the fifth grade?", "They hit me on the head.", "I judge her (to be) honest.", "He kicked a football too high.", "Who took the first prize?", "He won the race.", "to stone her to death", "This blue vase is beautiful.", "Look at the stone wall.", "I have a nice car.", "It s very good."}
};

// Basic_Example_Meaning �ܾ� ���� �� �迭

char Basic_Example_Meaning[10][20][10000] = {
	{"�Ĺ��� ���� �־��.", "�״� �ð��� ���ڸ��� �����.", "��·��, ���� ���� �༭ ������.", "�״� ���� �ѱ��� ���� �߱����� ����Ұž�.", "�Ź� ���", "�̰��� ���� �װ� �ִ� ����̴�.", "�׳�� ���� ���̸� ������.", "�״� �װ��� ��ĥ �� �ȴ�.", "���� ���� ���ٰ� �Ͼ�.", "����� 5�г��̿���?", "�׵��� ���� �Ӹ��� ���ȴ�.", "���� �׳డ �����ϴٰ� �Ǵ�(����)�Ѵ�.", "�״� �౸���� ���� �Ⱦ�á��.", "���� 1����� �޾ҳ�?", "�״� ���ֿ��� �¸��߾��.", "���� ���� �׳ฦ ���̴�.", "�� �Ķ� �ɺ��� �Ƹ����.", "������ ����.", "���� ���� ���� ������ �ִ�.", "�ſ� ����."}
};

// Basic_Proverb_Word �ܾ� �Ӵ� �迭

char Basic_Proverb_Word[50][10000] = { "As the old cock crows, the young cock learns.", "A leopard cannot change its spots.", "A cat may look at the king.", "A drowning man grasp at a straw.", "A fool and his money soon part", "All is fish that comes to his net.", "A friend in need is a friend indeed.", "Actions speak louder than words.", "A wonder lasts but nine days.", "A burnt child dreads the fire.", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", };

// Basic_Proverb_Meaning �ܾ� �Ӵ� �� �迭

char Basic_Proverb_Meaning[50][10000] = { "���� �� 3���̸� ǳ���� ���´�.", "ǥ���� ���� ������ ��ȣ��ų �� ����.", "������ �׿� ����ϴ� �Ǹ��� �ִ�.", "���� ���� ����� ��Ǫ���� ��´�.", "�ٺ��� �� �� ���� �� ���� ����.", "�ڱ� �ռ��� ������.", "��濡 ó���� �� ���� ģ���� ������ ģ���̴�.", "������ �ൿ�� �켱", "������ ���� �� ��; �� ����� �������� �Ǵ� ��", "�ҿ� �� ���̴� ���� ������ �Ѵ�.", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "" };


// ---------- Mid �迭 ----------


// Mid_Word �ܾ� �迭  

char Mid_Word[10][20][100] = {
	{"tower", "effort", "fault", "floor", "goodness", "pleased", "lifetime", "mad", "suppose", "take a rest", "treasure", "act", "clerk", "foot", "pay", "seed", "shout", "settle", "environment", "at least"},
	{"feel", "homeless", "jar", "organization", "pity", "pollute", "prevent", "put", "be mad at", "try ~ing", "regular", "trash", "bin", "brush", "instead", "peoples", "percent", "reduce", "do well on the test", "be supposed to"},
	{"reuse", "tap", "unpleasant", "blow", "contribute", "crazy", "desolate", "devote", "farm", "A rather than B", "fertile", "fill", "incredible", "mystery", "provide", "region", "silent", "valley", "until", "look around"},
	{"map", "project", "rainbow", "seat", "traffic", "wonderful", "bank", "being", "discover", "take a shower", "heat", "lead", "false", "common", "library", "moment", "storm", "band", "cheer", "make it"},
	{"pleasure", "action", "payment", "pollution", "reusable", "farmer", "silence", "wonder", "fell sorry for", "instead of", "heatstroke", "commonly", "cheerful", "discoverer", "peaceful", "stormy", "devote to ~ ing", "in silence", "be crazy about", "be filled with = be full of"},
	{"creature", "bar", "zoo", "wise", "pal", "hate", "everyday", "square", "reply", "provide A with B", "ingredient", "key", "peace", "museum", "department", "drop", "press", "scene", "wheel", "lead A to B"},
	{"bridge", "coach", "deep", "flag", "grocery", "hometown", "lovely", "note", "sail", "have ~ in common", "succeed", "yet", "capital", "couple", "disappoint", "object", "pour", "folk", "obey", "pride"},
	{"rope", "successful", "sunrise", "tip", "adult", "cash", "dictionary", "garbage", "joy", "quite", "spread", "suggest", "unhappy", "affect", "audience", "brick", "depend", "frighten", "host", "melt"},
	{"purpose", "suit", "wet", "wing", "cell", "crowd", "guest", "helpful", "outdoor", "pool", "sheet", "strike", "warn", "ahead", "bet", "cave", "earn", "satellite", "wood", "convert"},
	{"wisdom", "pressure", "scenery", "success", "disappointed", "sunset", "suggestion", "host country", "succeed in", "a couple of", "crowded", "helpless", "earning", "wooden", "foolish", "quickly", "attention", "settler", "pour into", "depend on"}
};

// Mid_Meaning �ܾ� �� �迭 

char Mid_Meaning[10][20][10000] = {
	{"[��] ž", "[��] ���, ����", "[��] ����, ����, �߸�, ��", "[��] ����ٴ�, ��, �ٴ�", "[��] ģ��, ���, ����, ����", "[��] �����ϴ�, ���������� �ϴ�", "[��] �ϻ�, ��� / [��] �ϻ�������", "[��] ȭ��, ��������, ��ģ", "[��] �����ϴ�, �����ϴ�, �����ϴ�", "����, �޽��� ���ϴ�", "[��] ����, ���� / [��] ������ �ϴ�, �����ϰ� �����", "[��] �ൿ�ϴ�, �����ϴ� / [��] �ൿ, ����", "[��] �繫��, ����", "[��] ��", "[��] �����ϴ�, ���� ġ���� / [��] ����", "[��] ����, ��, ����", "[��] ��ġ��, �Ҹ� ������ / [��] ��ħ", "[��] �ذ��ϴ�, Ǯ��, �����ϴ�, �����ϴ�", "[��] ȯ��, ������Ȳ, �ڿ�ȯ��", "���, �ּ���"},
	{"[��] ������", "[��] ���� ����", "[��] �׾Ƹ�, ����", "[��] ����, ����, ��ü", "[��] ����, ������ ��, ���� / [��] �����ϴ�", "[��] ������Ű��, ��������", "[��] ����, �����ϴ�, �����ϴ�, ���ϰ� �ϴ�", "[��] �δ�, ����", "~�� ȭ����", "���� ��� ~�غ���", "[��] ��Ģ����, ��������, ������", "[��] ������", "[��] ������ ��, ū ����", "[��] �� / [��] �����ϴ�, �̸� �۴�, �Ӹ��� ����", "[��] �� ��ſ�", "[��] ����", "[��] �ۼ�Ʈ, �����", "[��] ���ҽ�Ű��, ���̴�, ���ߴ�, ����ϴ�", "������ �ߺ���", "~�ϱ�� �Ǿ� �ִ�, ~�ؾ� �Ѵ�"},
	{"[��] �ٽû���ϴ�, �����ϴ� / [��] ����, ���̿�", "[��] ���� �ε帮��, ������ �ε帮�� / [��] ��������, ����", "[��] ������, ����", "[��] �Ҵ�, �ٶ��� �Ҵ� / [��] ��Ÿ, Ÿ��", "[��] ����ϴ�, �����ϴ�, �����ϴ�, �⿩�ϴ�", "[��] ��ģ, ��������, ȭ��, �̻���, �����ϴ�", "[��] Ȳ����, ������, ����� ���� / [��] Ȳ���Ű��, �����ϰ� �ϴ�", "[��] �����ϴ�, ��ġ��", "[��] ���� / [��] �����ϴ�", "B��� ���ٴ� ���� A�̴�", "[��] �����, ���� �⸧��, �ٻ���", "[��] ä���, �޿��, ���� ä���", "[��] ���� �� ����, ����, �ſ� �Ǹ���", "[��] �ź�, �Ұ�����, ���, ��������, �̽��׸�", "[��] �����ϴ�, �����ϴ�, �ξ��ϴ�", "[��] ������, �о�, ����, ����", "[��] ������, �����, ħ���ϴ�", "[��] ��¥��, ���", "[��] ~����, ~�� ������", "������ �ѷ�����"},
	{"[��] ����", "[��] ��ȹ, ��������, ��� / [��] �����ϴ�, �����ϴ�, ��ȹ�ϴ�", "[��] ������", "[��] �¼� / [��] ������", "[��] ����, ���뷮", "[��] �������, ����, �Ǹ���", "[��] ����, ����", "[��] ����, ����", "[��] �߰��ϴ�", "������ �ϴ�", "[��] ��, ���� / [��] �̰߰� �ϴ�, �����ϴ�", "[��] �̲���, �ε��ϴ� / [��] ��(�ݼ�)", "[��] �׸���, Ʋ��, ������, ��¥��", "[��] ����, ������, ������", "[��] ������", "[��] ����, �ñ�, ��", "[��] ��ǳ, ��ǳ��", "[��] �Ǵ�, ���, ��", "[��] ȯȣ�ϴ�, �����ϴ�, �ݷ��ϴ� / [��] ȯȣ, ����, �ݷ�", "����� �����ϴ�, ����� �س���, �����ϴ�"},
	{"[��] ��ſ�, ���", "[��] �ൿ, Ȱ��", "[��] ����, ����, ���Ҿ�", "[��] ����, ����", "[��] ������ ������", "[��] ���", "[��] ħ��, �����", "[��] ����, �ź�ο� / [��] �ñ��ϴ�, ����", "~�� �������� �����", "~��ſ�", "[��] �ϻ纴, ���纴", "[��] �Ϲ�������, ����", "[��] ����, ������, ��Ȱ��, �������", "[��] �߰���", "[��] ��ȭ�ο�", "[��] ��ǳ��, ��ǳ����", "~�� ��ġ��, ����ϴ�", "������, ������", "~�� �ſ� �����ϴ�", "~�� ���� �� �ִ�"},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""}
};

// Mid_Example_Word �ܾ� ���� �迭

char Mid_Example_Word[10][20][10000] = {
	{"the control tower", "He makes an effort to improve the environment.", "It's my fault.", "the upper floor", "My goodness! You gained a lot of weight.", "I am very pleased to see you again.", "the lifetime employment", "Don't be mad at me!", "Suppose she would accept your offer.", "They took a good rest in the shade.", "Children are the treasure of our country.", "He acts as if he is a superman.", "a department store clerk", "He put his foot on a branch.", "How much did you pay for it?", "to sow the seed", "He shouted for help.", "He settled in Seuol after his father's death.", "My prime concern is to protect our environment", "He must be at least 40."}
};

// Mid_Example_Meaning �ܾ� ���� �� �迭

char Mid_Example_Meaning[10][20][10000] = {
	{"���� ž", "�״� ȯ���� �����ϱ� ���� ����մϴ�.", "�� �߸��̾�. ", "����", "�̷�! �� �� ���� �ȴ�.", "�ʸ� �ٽ� ������ ��ڱ���.", "��� ���", "������ ȭ���� ��!", "�׳డ ���� ������ �����Ѵٰ� �����غ���.", "�׵��� �״ÿ��� �� ������.", "��̴� �츮������ �����̴�.", "�״� ��ġ �ڱⰡ ���۸��� ��ó�� �ൿ�Ѵ�.", "��ȭ�� ����", "�״� ���������� ���� �÷����Ҵ�.", "�� �����ߴ�?", "���� �Ѹ���", "�״� ���� �޶�� ���ƴ�.", "�״� �ƹ��� ��� �� ���￡ �����ߴ�.", "���� ù ��° ������ �츮�� ȯ���� ��ȣ�ϴ� ���̴�.", "�״� ��� 40���� �� �ž�."}
};

// Mid_Proverb_Word �ܾ� �Ӵ� �迭

char Mid_Proverb_Word[50][10000] = { "Many drops make a shower.", "Two heads are better than one.", "Time files like an arrow.", "The pot calls the kettle black.", "Never judge by appearance!", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", };

// Mid_Proverb_Meaning �ܾ� �Ӵ� �� �迭

char Mid_Proverb_Meaning[50][10000] = { "���� ������� �ҳ��⸦ �̷��.", "�� ����� �Ӹ��� �� ����� �Ӹ����� ����.", "�ð��� ȭ��� ���� ��������.", "���� �����ں��� ��Ĵٰ� �Ѵ�.", "���� �Ѹ������ �Ǵ����� ����!", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", };


// ---------- High �迭 ----------


// High_Word �ܾ� �迭  

char High_Word[10][20][100] = {
	{"widow", "rule", "wipe", "confident", "achieve", "luck", "attack", "taste", "health", "deal with", "enemy", "fist", "honor", "mental", "bead", "centipede", "promote", "weapon", "arrow", "look forward to"},
	{"martial", "cure", "disease", "perform", "custom", "erase", "giant", "free", "herb", "law", "immediately", "lumberjack", "pilgrim", "offer", "merchant", "pine", "record", "several", "reward", "what on earth"},
	{"permit", "stream", "harmony", "trunk", "major", "cultivate", "oppose", "descend", "relation", "edge", "funeral", "mammal", "promise", "surface", "allow", "article", "generation", "nearly", "situation", "do harm"},
	{"skip", "unlike", "instance", "landmark", "refer", "consume", "culture", "equal", "figure", "refer to", "gender", "lie", "pair", "role", "alive", "astronaut", "beat", "dynasty", "stare", "atmosphere"},
	{"tasty", "healthy", "ruler", "confidence", "lucky", "performance", "customer", "eraser", "freedom", "reference", "lawyer", "permission", "harmoniously", "opposite", "consumer", "equilibrium", "cultural", "relationship", "descendant", "major in"},
	{"queue", "otherwise", "calm", "cellular", "web", "detect", "accident", "manage", "constant", "entertain", "face", "counselor", "dislike", "fright", "good-looking", "kid", "nervous", "positive", "schedule", "turn out"},
	{"self-confidence", "so-called", "unfortunately", "upbeat", "intend", "active", "favor", "bright", "nation", "voice", "defect", "prejudice", "cemetery", "crack", "hollow", "inning", "relay", "scar", "scholar", "slave"},
	{"boil", "chemical", "condition", "appreciate", "emergency", "explain", "handle", "marriage", "instant", "assign", "loose", "native", "noodle", "pronuncuation", "protein", "raw", "reflect", "saliva", "source", "calorie"},
	{"direct", "control", "moderate", "daily", "scary", "desire", "frank", "extra", "imaginative", "improve", "increase", "maintain", "meat", "routine", "case", "convert", "download", "file", "format", "take in"},
	{"detective", "management", "constantly", "entertainment", "activity", "brighten", "national", "chemistry", "get married to", "by accident", "well-appreciated", "assignment", "direction", "moderation", "scared", "frankly", "imagination", "explanation", "do ~ a favor", "intend to"}
};

// High_Meaning �ܾ� �� �迭 

char High_Meaning[10][20][10000] = {
	{"[��] �̸���, ����", "[��] ��Ģ, ����, ��ġ / [��] �ٽ�����, �����ϴ�, ��ġ�ϴ�", "[��] �۴�, �۾Ƴ���", "[��] �ڽ� �ִ�, �ڽŸ�����, Ȯ�� �ִ�", "[��] �̷��, �����ϴ�, �޼��ϴ�, ȹ���ϴ�", "[��] ���, ��", "[��] ���� / [��] �����ϴ�", "[��] ��, ���, ��ȣ, ���� / [��] ������, ���� ����", "[��] �ǰ�", "�ٷ��, ��ó�ϴ�", "[��] ��, ����, ������", "[��] �ָ�", "[��] ��, ����, ���� / [��] �����ϴ�, ���� �ִ�", "[��] ������, ������", "[��] ������", "[��] ����", "[��] �����ϴ�, ����ϴ�, ������Ű��", "[��] ����, ����", "[��] ȭ��", "~�� �м�����ϴ�"},
	{"[��] ����", "[��] ġ���ϴ�, ġ���ϴ� / [��] ġ��, ġ����, ġ���", "[��] ��, ����", "[��] �����ϴ�, �����ϴ�, �����ϴ�", "[��] ǳ��, ����, ����, ����", "[��] �����", "[��] ���� / [��] �Ŵ���", "[��] �����ο�, ������", "[��] Ǯ, �Ŀ�Ĺ�, ���", "[��] ��, ����", "[��] ��, ���", "[��] ������, �����ϴ� ���", "[��] ������", " [��] �����ϴ�, �����ϴ� / [��] ����, ����", "[��] ���� / [��] �����", "[��] ��, �ҳ���", "[��] ��� / [��] ����ϴ�, �����ϴ�", "[��] �����, ������ / [��] ���, �� ��", "[��] ����, ����� / [��] �����ϴ�, ���� �ִ�, �����ϴ�", "����ü"},
	{"[��] �㰡��, �㰡 / [��] ����ϴ�, ����ϴ�, �㰡�ϴ�", "[��] ��õ, ����, �帧 / [��] �帣��", "[��] ��ġ, ��ȭ, ȭ��", "[��] �����ٱ�, ����� ū ����", "[��] ����, (����)�ҷ� / [��] �ֿ���, ��κ���, �߿���, ��ټ��� / [��] �����ϴ�", "[��] �����ϴ�, ����ϴ�", "[��] �ݴ��ϴ�, �븳�ϴ�, �����ϴ�", "[��] ��������, ��������, ~�� �ڼ��̴�", "[��] ����", "[��] �����ڸ�, Į��", "[��] ��ʽ� / [��] �����", "[��] ��������, ������", "[��] ���, ���� / [��] ����ϴ�", "[��] ǥ��, �ܰ�, �� / [��] ǥ����, �ܰ���", "[��] ����ϴ�, ����ϴ�", "[��] ���, ����, ǰ��", "[��] ����", "[��] ����, �ϸ��͸�", "[��] ��Ȳ, ����, ����", "�ظ� ��ġ��"},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""}
};

// High_Example_Word �ܾ� ���� �迭

char High_Example_Word[10][20][10000] = {
	{"She look care of a poor widow with four children in the neighborhood.", "In March 1919, Koreans declared independence from Japanese colonial rule.", "She wiped the tears from his eyes.", "I'm confident that I will get the job.", "Some people try hard to achieve a high position.", "a bird that represents good luck", "The best way to defend is attack.", "The food tastes awful.", "These days acid rain threatens our health.", "This book deals with global warming.", "The bird spread its wings to frighten its enemy.", "The martial art uses hands and fist to keep their attackers from attacking.", "He wins honor and glory.", "Vincent Van Gogh suffered from a mental illness.", "She wears a necklace of wooden beads", "Centipede is a small creature like an insect which has a long thin body and many legs.", "Wealth distribution could promote economic growth.", "This document contains details of weapon projects.", "This archers shot lots of fire arrows into the air.", "I look forward to hearing from you."}
};

// High_Example_Meaning �ܾ� ���� �� �迭

char High_Example_Meaning[10][20][10000] = {
	{"�׳�� �̿��� �׾��̰� �ִ� ������ �̸����� �����Ҵ�.", "1919�� 3��, �ѱ� ������� �Ϻ��� �Ĺ���ġ�κ��� ������ �����ߴ�.", "�׳�� ���� ������ ������ �۾� �־���.", "���� �� ���� ���� ���� Ȯ����.", "������� ���� ������ ���� �ϱ����� ���� ����� �Ѵ�.", "����� �ǹ��ϴ� ��", "����ϴ� �ּ��� ����� �����ϴ� ���̴�.", "���� ���� ������ ���� ��.", "���� �꼺�� �츮�� �ǰ��� �����մϴ�.", "�� å�� ���� �³�ȭ�� ���� �ٷ�� �ִ�.", "�� ���� õ���� ���ֱ� ���� ������ ���.", "�� ������ �����ڰ� ������ ���ϵ��� �հ� �ָ��� ����Ѵ�.", "�״� ���� ������ �����.", "��Ʈ �� ����� ������ ��ȯ�� �ξҴ�.", "�׳�� ������ �� ���� �����(����)�� �ϰ� �ִ�.", "���״� ��� ���� ����� ���� �ٸ��� ���� ���� ���� ���� ����ü�̴�.", "���� ��й�� ���������� ���� �� �� �ִ�.", "�� �������� ���� ����� ���� ���λ����� ���ԵǾ��ִ�.", "�ü����� ������ ��ȭ���� �������� ��� �÷ȴ�.", "�ʷκ��� �ҽ��� �м�����Ѵ�.(��û ��ٸ���)"}
};

// High_Proverb_Word �ܾ� �Ӵ� �迭

char High_Proverb_Word[50][10000] = { "Near heighbor is better than a distant cousin.", "Old habits die hard.", "Penny-wise and pound-foolish.", "Roses have thorns.", "Sow the wind and reap the whirlwind.", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", };

// High_Proverb_Meaning �ܾ� �Ӵ� �� �迭

char High_Proverb_Meaning[50][10000] = { "�̿�����", "���� ������ ������ ��ƴ�.", "�ܵ����� �����ϰ�, ū������ �����.", "��̿��� ���ð� �ִ�.", "�Ƿ� �ְ� ���� �޴´�.", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", };


// MODE 3 ( FINAL REVIEW MODE ) �ܾ� �ߺ� ���� �迭 * 10

int Check_Overlaps_1[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
int Check_Overlaps_2[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
int Check_Overlaps_3[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
int Check_Overlaps_4[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
int Check_Overlaps_5[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
int Check_Overlaps_6[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
int Check_Overlaps_7[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
int Check_Overlaps_8[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
int Check_Overlaps_9[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
int Check_Overlaps_10[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };

// MODE 3 ( FINAL REVIEW MODE ) �ܾ� �ߺ� ���� �迭�� ����Ű�� ������

int* Check_Overlaps_Pointer;

void console_window();

void console_color_change(int text_color, int background_color);

char choice_BMH(char* pointer_BMH);

int choice_mode(int* pointer_MODE);

int choice_day(int* pointer_DAY, int check_MODE);

int choice_level(int* pointer_LEVEL);

void Change_Check_Overlaps_Pointer(int random_number);

int main() {

	// WELCOME TO EASY ENGLISH !!

	// CHOICE 1

	// Basic, Mid, High

	// CHOICE 2

	// MODE 1 : < LOOK MODE >

	// MODE 2 : < REVIEW MODE >

	// MODE 3 : < FINAL REVIEW MODE >

	// ... ���� ���� ���ӵ� �߰��� ����...

	// �ܾ��� ���� �Է� �޴� ���� ���� ( Basic, Mid, High )

	char BMH;

	// �ܾ��� MODE �Է� �޴� ���� ����

	int MODE;

	// ������ ���� ��� Word �迭 ( Basic or Mid or High_Word �迭 )  

	char(*Array_Word)[20][100];

	// ������ ���� ��� Meaning �迭 ( Basic or Mid or High_Meaning �迭 )  

	char(*Array_Meaning)[20][10000];

	// ������ ���� ��� Example_Word �迭 ( Basic or Mid or High_Example_Word �迭 )  

	char(*Array_Example_Word)[20][10000];

	// ������ ���� ��� Example_Meaning �迭 ( Basic or Mid or High_Example_Meaning �迭 )  

	char(*Array_Example_Meaning)[20][10000];

	// ������ ���� ��� Proverb_Word �迭 ( Basic or Mid or High_Proverb_Word �迭 )  

	char(*Array_Proverb_Word)[10000];

	// ������ ���� ��� Proverb_Meaning �迭 ( Basic or Mid or High_Proverb_Meaning �迭 )  

	char(*Array_Proverb_Meaning)[10000];

	// DAY 1 ~ 50 �� �Է¹޴� ���� ����

	int DAY;

	// MODE 1 ( LOOK MODE ) �� PAGE

	int Look_Page = 0;

	// MODE 1 ( LOOK MODE ) �� PAGE �ʰ�, �̸� ó�� ( -1 �̰ų� 20 �̸� Again )

	int LimitAgain = 0;

	// MODE 1 ( LOOK MODE ) �� Arrow  ( ��, �� )

	char Arrow;

	// ���̵� ( LEVEL )

	int LEVEL;

	// MODE 2 ( REVIEW MODE ) �� ���� �� 3�� ( Normal, Hard - Random )

	int Review_NH_Random_1, Review_NH_Random_2, Review_NH_Random_3;

	// MODE 2 ( REVIEW MODE ) �� ���� Ȯ�� ( Normal, Hard - Answer )

	int Review_NH_Answer;

	// MODE 2 ( REVIEW MODE ) �� ����, ���� ���� Ȯ�� ( O, X )

	int Review_O = 0, Review_X = 0;

	// MODE 2 ( REVIEW MODE ) �� ���� �� ( Hell - Random )

	int Review_H_Random_1;

	// MODE 2 ( REVIEW MODE ) �� �ܾ� ���� Ȯ�� ( Hell - Word )

	int Review_Word = 1;

	// MODE 2 ( REVIEW MODE ) �� ���� Ȯ�� ( Hell - Answer )

	char Review_H_Answer[100];

	// MODE 2 ( REVIEW MODE ) �ܾ� �ߺ� ���� �迭

	int Check_Overlap[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };



	// MODE 3 ( FINAL REVIEW MODE ) �� ���� �� 2�� ( Normal, Hard - Random )

	int Final_Review_NH_Random_1, Final_Review_NH_Random_2, Final_Review_NH_Random_3, Final_Review_NH_Random_4, Final_Review_NH_Random_5;

	// MODE 3 ( FINAL REVIEW MODE ) �� ���� Ȯ�� ( Normal, Hard - Answer )

	int Final_Review_NH_Answer;

	// MODE 3 ( FINAL REVIEW MODE ) �� �ܾ� ���� Ȯ�� ( Hell - Random )

	int Final_Review_Word = 1;

	// MODE 3 ( FINAL REVIEW MODE ) �� ���� �� 2�� ( Hell - Random )

	int Final_Review_H_Random_1, Final_Review_H_Random_2;

	// MODE 3 ( FINAL REVIEW MODE ) �� ���� Ȯ�� ( Hell - Answer )

	char Final_Review_H_Answer[100];

	// MODE 3 ( FINAL REVIEW MODE ) �� ����, ���� ���� Ȯ�� ( O, X )

	int Final_Review_O = 0, Final_Review_X = 0;

	// MODE 4 ( HANG MAN GAME MODE ) �� ���� �� 2��

	int HangMan_Random_1, HangMan_Random_2;

	// MODE 4 ( HANG MAN GAME MODE ) �� ��� 10 ��

	int HangMan_Heart = 10;

	// MODE 4 ( HANG MAN GAME MODE ) �� ���� ( ó������ 1 )

	int HangMan_Question = 1;

	// MODE 4 ( HANG MAN GAME MODE ) �� ����, ���� Ȯ��

	int HangMan_O = 0, HangMan_X = 0;

	// MODE 4 ( HANG MAN GAME MODE ) �� ���� ���� Ȯ��

	// 0 : ���� ����, 1 : ���� ���� �״�� 

	int HangMan_Next_Question = 1;

	// MODE 4 ( HANG MAN GAME MODE ) �� �������� ���� �迭�� ���� ������ ���ڿ� �迭

	char HangMan_Temp_Char[30];

	// MODE 4 ( HANG MAN GAME MODE ) �� �ӽù迭 ( HangMan_Temp_Char ) �� ���̸� �����ϴ� ����

	int HangMan_Length;

	// MODE 4 ( HANG MAN GAME MODE ) �� ���̿� �°� _ �� �����ϴ� �ӽ� �迭

	char HangMan_Temp_Array[30];

	// MODE 4 ( HANG MAN GAME MODE ) �� ���ĺ� �Է°��� ������ ���ڸ� ������� �Է��� ���ĺ��� �߰��� �� �����Ǵ� �ӽ� ����

	int HangMan_Temp_Int = 0;

	// MODE 4 ( HANG MAN GAME MODE ) �� ������� �Է��� ���ĺ��� �����ϴ� �迭

	char HangMan_History_Array[30] = "";

	// MODE 4 ( HANG MAN GAME MODE ) �� ���ĺ� �Է°��� �����ϴ� ���� ������

	char HangMan_Answer;

	// MODE 4 ( HANG MAN GAME MODE ) �� ����� �Է��� ���ĺ� ���Ҷ� ���� ī��Ʈ ����

	int HangMan_Count = 0;

	// MODE 4 ( HANG MAN GAME MODE ) �� �� ���ĺ��̶� ����� �������� �˱����� ����

	int HangMan_Switch = 0;

	// ��� ���� ��� ( �ܾ��� ���� �ϸ鼭 ���ǵ� ����, ��� �ݺ� ) 

	// sndPlaySoundA("mymusic.wav", SND_ASYNC | SND_LOOP);

	// STEP 0-1

	// CONSOLE â ũ��, ���� ���� ( �Լ� �̿� )

	console_window();

	// STEP 0-2

	// CONSOLE â ���� + ��� �� �ٲٱ� ( �Լ� �̿� )

	// 4 = ������

	// 15 = ���� ���

	console_color_change(4, 15);

	// STEP 1

	// EASY ENGLISH �ܾ��忡 �� ���� ȯ���ϴ� ���� ���

	printf("==================================================================================================================================\n");
	printf("========================================== EASY ENGLISH �ܾ��忡 ���� ���� ȯ���մϴ�. ===========================================\n");
	printf("==================================================================================================================================\n\n\n");

	// STEP 1-2

	// CONSOLE â ���� + ��� �� �ٲٱ� ( �Լ� �̿� )

	// 0 = ������

	// 15 = ���� ���

	console_color_change(0, 15);

	// STEP 2-1

	// EASY ENGLISH �ܾ��� ���� ���� ( �Լ� �̿� )

	choice_BMH(&BMH); // BMH �� �ּҸ� ���� 

	// STEP 2-2

	// BMH �� ����� ���� �ӽ� �迭 �� ����

	// ( B = Basic, M = Mid, H = High ) 

	if (BMH == 'B') {

		Array_Word = Basic_Word;

		Array_Meaning = Basic_Meaning;

		Array_Example_Word = Basic_Example_Word;

		Array_Example_Meaning = Basic_Example_Meaning;

		Array_Proverb_Word = Basic_Proverb_Word;

		Array_Proverb_Meaning = Basic_Proverb_Meaning;

	}
	else if (BMH == 'M') {

		Array_Word = Mid_Word;

		Array_Meaning = Mid_Meaning;

		Array_Example_Word = Mid_Example_Word;

		Array_Example_Meaning = Mid_Example_Meaning;

		Array_Proverb_Word = Mid_Proverb_Word;

		Array_Proverb_Meaning = Mid_Proverb_Meaning;

	}
	else if (BMH == 'H') {

		Array_Word = High_Word;

		Array_Meaning = High_Meaning;

		Array_Example_Word = High_Example_Word;

		Array_Example_Meaning = High_Example_Meaning;

		Array_Proverb_Word = High_Proverb_Word;

		Array_Proverb_Meaning = High_Proverb_Meaning;

	}
	else {

		// BMH �� B, M, H �� �ƴ� ��� ���� ǥ���ϰ� ���α׷� ���� 

		printf("\n\n ���� �Դϴ� ... \n\n");

		exit(0);

	}

	// �ӽ� �迭 ��� Ȯ�� ( ��� 1 )

	/*printf("\n%s\n", Array_Word[0][0]);

	printf("\n%s\n", Array_Meaning[0][0]);

	printf("\n%s\n", Array_Example_Word[0][0]);

	printf("\n%s\n", Array_Example_Meaning[0][0]);

	printf("\n%s\n", Array_Proverb_Word[0]);

	printf("\n%s\n", Array_Proverb_Meaning[0]);*/

	// �ӽ� �迭 ��� Ȯ�� ( ��� 2 )

	/*printf("\n%s\n", *(*(Array_Word + 0) + 0));

	printf("\n%s\n", *(*(Array_Meaning + 0) + 0));

	printf("\n%s\n", *(*(Array_Example_Word + 0) + 0));

	printf("\n%s\n", *(*(Array_Example_Meaning + 0) + 0));

	printf("\n%s\n", *(Array_Proverb_Word + 0));

	printf("\n%s\n", *(Array_Proverb_Meaning + 0));*/

	// �ܼ� ȭ�� ��µ� ����� �����

	//system("cls");

	// STEP 3

	// EASY ENGLISH �ܾ��� MODE ���� ( �Լ� �̿� )

	choice_mode(&MODE);


	// STEP 4

	// ������ ���� �̵�

	// STEP 4-1

	// MODE �� 1 �϶� ( LOOK MODE )

	if (MODE == 1) {

		// LOOK MODE ( 1 ~ 50 DAY �� �Է��� DAY �� �ܾ�� ��, �Ӵ��� �����ִ� ��� )

		// 1 ~ 50 DAY ���� ( �Լ� �̿� )

		choice_day(&DAY, MODE);

		// LOOK MODE ����

		printf("==================================================================================================================================\n");
		printf("============= < LOOK MODE > ���� �ܾ� ���� = ������ ȭ��ǥ ( �� ), ���� �ܾ� ���� = ���� ȭ��ǥ ( �� ), ���� = Enter =============\n");
		printf("==================================================================================================================================\n\n\n");

		// ������ DAY �� Word, Meaning, Example_Word, Example_Meaning, Proverb_Word, Proverb_Meaning ���

		// ó�� ������ �κ�

		printf("   < DAY %d - %d > \n\n\n", DAY, Look_Page + 1);

		printf("   - %s : ", Array_Word[DAY - 1][Look_Page]);

		printf("%s\n\n\n", Array_Meaning[DAY - 1][Look_Page]);

		printf("   EX) : %s ", Array_Example_Word[DAY - 1][Look_Page]);

		printf("   �� : %s\n\n\n", Array_Example_Meaning[DAY - 1][Look_Page]);

		// ���� ( Enter ) �� ĥ������ ��� �ݺ�

		while (1) {

			if (_kbhit()) {               // 1. while���ȿ��� Ű���� ������ �� if���� ����ȴ�.

				Arrow = _getch();           // 2. ����Ű�� �Է��� �� 224 00 �� ���ۿ� �ִ�. 224���� ���ش�. 

				if (Arrow == -32) {           // 3. -32�� �ԷµǸ�

					Arrow = _getch();        // 4. ���� �� 00�� �Ǻ��Ͽ� �¿���� ���

					switch (Arrow) {

					case LEFT: // ���� ȭ��ǥ ( �� ) �� ������ ��

						if (LimitAgain == 0) { // ���� ȭ��ǥ�� ������ �� Look_Page �� 0 ~ 19 �� ��

							--Look_Page; // ���� ȭ��ǥ��� 1�� ����. ( - )

						}
						else { // ���� ȭ��ǥ�� ������ �� Look_Page �� 0 ~ 19 �ƴ� �� ( �� -1 �϶� )

							Look_Page = 19; // ���� ���� Look_Page �� �ٲ�

						}

						// case LEFT ����

						break;

					case RIGHT: // ������ ȭ��ǥ ( �� ) �� ������ ��

						if (LimitAgain == 0) { // ������ ȭ��ǥ�� ������ �� Look_Page �� 0 ~ 19 �� ��

							++Look_Page; // ������ ȭ��ǥ��� 1�� ���Ѵ�. ( + )

						}
						else { // ������ ȭ��ǥ�� ������ �� Look_Page �� 0 ~ 19 �ƴ� �� ( �� 20 �϶� )

							Look_Page = 0; // ���� ���� Look_Page �� �ٲ�

						}

						// case LEFT ����

						break;

					}

					// Look_Page �� -1 �̰ų� 20 �̶��

					if (Look_Page <= -1 || Look_Page >= 20) {

						// �ܼ� ȭ�� ��µ� ����� �����

						system("cls");

						// LOOK MODE ����

						printf("==================================================================================================================================\n");
						printf("============= < LOOK MODE > ���� �ܾ� ���� = ������ ȭ��ǥ ( �� ), ���� �ܾ� ���� = ���� ȭ��ǥ ( �� ), ���� = Enter =============\n");
						printf("==================================================================================================================================\n\n\n");

						// �Ӵ� ��� ( Proverb )

						printf("   < DAY %d - �߿� �Ӵ� ! > \n\n\n", DAY);

						printf("   - %s : ", Array_Proverb_Word[DAY - 1]);

						printf("%s\n\n\n", Array_Proverb_Meaning[DAY - 1]);

						// �̸� or �ʰ� 

						LimitAgain = 1;

						// Look_Page �� -1 �̰ų� 20 �� �ƴ϶��

					}
					else {

						// �ܼ� ȭ�� ��µ� ����� �����

						system("cls");

						// LOOK MODE ����

						printf("==================================================================================================================================\n");
						printf("============= < LOOK MODE > ���� �ܾ� ���� = ������ ȭ��ǥ ( �� ), ���� �ܾ� ���� = ���� ȭ��ǥ ( �� ), ���� = Enter =============\n");
						printf("==================================================================================================================================\n\n\n");

						// ������ DAY �� Word, Meaning, Example_Word, Example_Meaning, Proverb_Word, Proverb_Meaning ���

						printf("   < DAY %d - %d > \n\n\n", DAY, Look_Page + 1);

						printf("   - %s : ", Array_Word[DAY - 1][Look_Page]);

						printf("%s\n\n\n", Array_Meaning[DAY - 1][Look_Page]);

						printf("   EX) : %s ", Array_Example_Word[DAY - 1][Look_Page]);

						printf("   �� : %s\n\n\n", Array_Example_Meaning[DAY - 1][Look_Page]);

						// �̸� or �ʰ��� �ƴ����� �ʱ�ȭ

						LimitAgain = 0;

					}

				}
				else if (Arrow == 13) { // �ƽ�Ű �ڵ� 13�� Enter �̴�.

			   // while �� ���� 

					break;

				}
			}
		}

		// STEP 4-2

		// MODE �� 2 �϶� ( REVIEW MODE )

	}
	else if (MODE == 2) {

		// REVIEW MODE ( 1 ~ 50 DAY �� �Է��� DAY �� �ܾ�� ���� �׽�Ʈ�ϴ� ��� )

		// 1 ~ 50 DAY ���� ( �Լ� �̿� )

		choice_day(&DAY, MODE);

		// ���̵� ���� ( Normal, Hard, Hell ) ( �Լ� �̿� )

		// 1. Normal - �ѱ� �� ������ �ְ� ���� �ܾ� 4�� �� 1�� ��

		// 2. Hard - ���� �ܾ� ������ �ְ� �ѱ� �� 4�� �� 1�� ��

		// 3. Hell - �ѱ� �� ������ �ְ� ���� �ܾ ���� �Է�

		choice_level(&LEVEL);

		// REVIEW MODE DAY ǥ��

		printf("==================================================================================================================================\n");
		printf("================================================== < REVIEW MODE > DAY %d REVIEW =================================================\n", DAY);
		printf("==================================================================================================================================\n\n\n");

		// ���� �Լ� ����

		srand((unsigned)time(NULL));

		// ���� ���̵��� Normal �̰ų� Hard ��

		if (LEVEL == 1 || LEVEL == 2) {

			// 20 ���� �ܾ� ���� ��� ( 0 ~ 20 )

			for (int i = 0; i < 20; i++) {

				// ������ ���� ��ȣ ( 0 ~ 3 )

				Review_NH_Random_1 = rand() % 4;

				// LEVEL �� 1�̸� �� ������, LEVEL �� 2�̸� �ܾ� ������ ��� 

				if (LEVEL == 1) {

					printf("   %d. %s \n\n\n", i + 1, Array_Meaning[DAY - 1][i]);

				}
				else {

					printf("   %d. %s \n\n\n", i + 1, Array_Word[DAY - 1][i]);

				}

				// ������ ���� ���� ��� ( 4�� )

				for (int j = 0; j < 4; j++) {

					while (1) {

						// �������� 20���� �ܾ� �� 1�� ���� ( 0 ~ 19 ) 

						Review_NH_Random_2 = rand() % 20;

						// �������� 10 DAY �� 1���� DAY ���� ( 0 ~ 9 )

						Review_NH_Random_3 = rand() % 10;

						// ���� �������� ���� �� ���� ���� ������ �迭�� ���� �ʴٸ� ����

						// ���ٸ� ���� ���� ������ �ݺ�

						if (Review_NH_Random_2 != i && Review_NH_Random_3 != (DAY - 1)) {

							// while �� Ż��

							break;

						}

					}

					// ���� j �� Look_Random �̶�� ==> ������ ����

					if (Review_NH_Random_1 == j) {

						// LEVEL �� 1�̸� ���� ������ ���⸦, LEVEL �� 2�̸� ( 1�� �ƴϸ� ) �ܾ ������ ���⸦ ���

						if (LEVEL == 1) {

							printf("   Q%d. %s\n\n", j + 1, Array_Word[DAY - 1][i]);

						}
						else {

							printf("   Q%d. %s\n\n", j + 1, Array_Meaning[DAY - 1][i]);

						}

						// ���� j �� Look_Random �ƴ϶�� ==> ������ ����

					}
					else {

						// LEVEL �� 1�̸� ���� ������ ���⸦, LEVEL �� 2�̸� ( 1�� �ƴϸ� ) �ܾ ������ ���⸦ ���

						if (LEVEL == 1) {

							printf("   Q%d. %s\n\n", j + 1, Array_Word[Review_NH_Random_3][Review_NH_Random_2]);

						}
						else {

							printf("   Q%d. %s\n\n", j + 1, Array_Meaning[Review_NH_Random_3][Review_NH_Random_2]);

						}

					}

				}

				// �ٹٲ� * 3

				printf("\n\n\n");

				// ���� �Է¹ޱ�

				printf("   ������: ");
				scanf("%d", &Review_NH_Answer);

				// �ܼ� ȭ�� ��µ� ����� �����

				system("cls");

				// ���� �Է��� ���� �����̶�� 

				if ((Review_NH_Answer - 1) == Review_NH_Random_1) {

					// ���� ���� ��Ʈ ���

					// ���ڻ��� ������, ������ ���� �Ͼ������ ����

					console_color_change(4, 15);

					printf("\n\n   �����Դϴ� !!\n\n\n");

					// ���ڻ��� ������, ������ ���� �Ͼ������ ����

					console_color_change(0, 15);

					// ���� ���� Ƚ�� ( ����Ʈ ) ����

					++Review_O;

				}
				else {

					// ���� ��Ʈ ���

					printf("\n\n   �����Դϴ� !!\n\n\n");

					// ������ ������� Ȯ��

					// ���ڻ��� ������, ������ ���� �Ͼ������ ����

					console_color_change(4, 15);

					// LEVEL �� 1�̸� ���� ������ ���⸦, LEVEL �� 2�̸� ( 1�� �ƴϸ� ) �ܾ ������ ���⸦ ���

					if (LEVEL == 1) {

						printf("   ������ %s �Դϴ�.\n\n\n", Array_Word[DAY - 1][i]);

					}
					else {

						printf("   ������ %s �Դϴ�.\n\n\n", Array_Meaning[DAY - 1][i]);

					}

					// ���ڻ��� ������, ������ ���� �Ͼ������ ����

					console_color_change(0, 15);

					// ������ Ƚ�� ( ����Ʈ ) ����

					++Review_X;

				}

			}

			// ���� ���̵��� Normal �̰ų� Hard �� �ƴϸ� ( Hell �̸� )

		}
		else {

			// �� ������ 20�� �� ������ ��� �ݺ�

			while (1) {

				// �ܾ 20�� �̻��̸� while �� Ż��

				if (Review_Word >= 21) {

					break;

				}

				// DAY �� �ܾ� ���� ���

				printf("   DAY %d - %d : ", DAY, Review_Word);

				// �������� 20���� �ܾ� �� 1�� ���� ( 0 ~ 19 ) 

				Review_H_Random_1 = rand() % 20;

				// 20 �� �ݺ� ( 0 ~ 19 )

				for (int n = 0; n < 20; n++) {

					// ���� ���� ���� �ߺ����� �ƴ��� Ȯ��

					if (Review_H_Random_1 == Check_Overlap[n]) {

						// ���� ���� �ߺ��� �ƴϸ� 100 �� ����

						// -> ������ �ߺ��� �ǰ� �ϱ� ���ؼ�

						Check_Overlap[n] = 100;

						// for �� ����

						break;

						// ���� ���� ���� �ߺ��̶��

					}
					else if ((n == 19) && (Check_Overlap[Review_H_Random_1] == 100)) {

						// for ���� �ٽ� ������ ������ n �ʱ�ȭ

						n = -1;

						// rand �Լ��� �ٽ� ���� �� ����

						Review_H_Random_1 = rand() % 20;

						// continue �� �ٽ� �ݺ�

						continue;

					}

				}

				// �ߺ� �˻簡 �� �迭�� �ܾ� ���

				printf("%s\n", Array_Meaning[DAY - 1][Review_H_Random_1]);

				// �ٹٲ� * 3

				printf("\n\n\n");

				// ���� �Է¹ޱ�

				printf("   ������: ");

				// %[^\n] = ���� ( \n ) �� ������ ��� ����

				scanf(" %[^\n]", Review_H_Answer);

				// �ܼ� ȭ�� ��µ� ����� �����

				system("cls");

				// ���� �Է��� ���� ����� ������ ( �����̸� )

				if (strcmp(Review_H_Answer, Array_Word[DAY - 1][Review_H_Random_1]) == 0) {

					// ���� ���� ��Ʈ ���

					// ���ڻ��� ������, ������ ���� �Ͼ������ ����

					console_color_change(4, 15);

					printf("\n\n   �����Դϴ� !!\n\n\n");

					// ���ڻ��� ������, ������ ���� �Ͼ������ ����

					console_color_change(0, 15);

					// ���� ���� Ƚ�� ( ����Ʈ ) ����

					++Review_O;

					// ���� �Է��� ���� ����� �ٸ��� ( �����̸� )

				}
				else {

					// ���� ��Ʈ ���

					printf("\n\n   �����Դϴ� !!\n\n\n");

					// ������ �������� Ȯ��

					// ���ڻ��� ������, ������ ���� �Ͼ������ ����

					console_color_change(4, 15);

					printf("   ������ %s �Դϴ�.\n\n\n", Array_Word[DAY - 1][Review_H_Random_1]);

					// ���ڻ��� ������, ������ ���� �Ͼ������ ����

					console_color_change(0, 15);

					++Review_X;
				}

				// �ܾ� �� ���� ( ���� �ܾ� )

				++Review_Word;
			}

		}

		// �ܼ� ȭ�� ��µ� ����� �����

		system("cls");

		// ����, ���� ���� ���

		printf("\n   ���� ������ %d �� �Դϴ�. \n", Review_O);
		printf("   Ʋ�� ������ %d �� �Դϴ�. \n", Review_X);

	}
	else if (MODE == 3) {

		// FINAL REVIEW MODE ( 1 ~ 50 DAY �� �ܾ�� ���� �׽�Ʈ�ϴ� ��� )

		// ���̵� ���� ( Normal, Hard, Hell ) ( �Լ� �̿� )

		// 1. Normal - �ѱ� �� ������ �ְ� ���� �ܾ� 4�� �� 1�� ��

		// 2. Hard - ���� �ܾ� ������ �ְ� �ѱ� �� 4�� �� 1�� ��

		// 3. Hell - �ѱ� �� ������ �ְ� ���� �ܾ ���� �Է�

		choice_level(&LEVEL);

		// FINAL REVIEW MODE DAY ǥ��

		printf("==================================================================================================================================\n");
		printf("====================================================== < FINAL REVIEW MODE > =====================================================\n");
		printf("==================================================================================================================================\n\n\n");

		// ���� �Լ� ����

		srand((unsigned)time(NULL));

		// ���� ���̵��� Normal �̰ų� Hard ��

		if (LEVEL == 1 || LEVEL == 2) {

			// ������ 200 �� �� ������ ��� �ݺ�

			while (1) {

				// �ܾ 200 �� �̻��̸� while �� Ż��

				if (Final_Review_Word >= 201) {

					break;

				}

				// 1 ~ 10 DAY �� �������� 1�� ����

				Final_Review_NH_Random_1 = rand() % 10;

				// �������� 20 ���� �ܾ� �� 1�� ���� ( 0 ~ 19 ) 

				Final_Review_NH_Random_2 = rand() % 20;

				// 20 �� �ݺ� ( 0 ~ 19 )

				for (int n = 0; n < 20; n++) {

					// 1 ~ 10 �� 1���� ����� ���� DAY ���� ( �Լ� �̿� )

					Change_Check_Overlaps_Pointer(Final_Review_NH_Random_1);

					// ���� ���� ���� �ߺ����� �ƴ��� Ȯ��

					if (Final_Review_NH_Random_2 == Check_Overlaps_Pointer[n]) {

						// ���� ���� �ߺ��� �ƴϸ� 100 �� ����

						// -> ������ �ߺ��� �ǰ� �ϱ� ���ؼ�

						Check_Overlaps_Pointer[n] = 100;

						// for �� ����

						break;

						// ���� ���� ���� �ߺ��̶��

					}
					else if ((n == 19) && (Check_Overlaps_Pointer[Final_Review_NH_Random_2] == 100)) {

						// for ���� �ٽ� ������ ������ n �ʱ�ȭ

						n = -1;

						// rand �Լ��� �ٽ� ���� �� ����

						Final_Review_NH_Random_1 = rand() % 10;

						Final_Review_NH_Random_2 = rand() % 20;

						// continue �� �ٽ� �ݺ�

						continue;

					}

				}

				// ������ ���� ��ȣ ( 0 ~ 3 )

				Final_Review_NH_Random_3 = rand() % 4;

				// LEVEL �� 1�̸� �� ������, LEVEL �� 2�̸� �ܾ� ������ ��� 

				if (LEVEL == 1) {

					printf("   %d. %s \n\n\n", Final_Review_Word, Array_Meaning[Final_Review_NH_Random_1][Final_Review_NH_Random_2]);

				}
				else {

					printf("   %d. %s \n\n\n", Final_Review_Word, Array_Word[Final_Review_NH_Random_1][Final_Review_NH_Random_2]);

				}

				// ������ ���� ���� ��� ( 4�� )

				for (int j = 0; j < 4; j++) {

					while (1) {

						// �������� 20���� �ܾ� �� 1�� ���� ( 0 ~ 19 ) 

						Final_Review_NH_Random_4 = rand() % 20;

						// �������� 10 DAY �� 1���� DAY ���� ( 0 ~ 9 )

						Final_Review_NH_Random_5 = rand() % 10;

						// ������ ����� ������ ���Ⱑ ��ġ���� ���� ������ �ݺ�

						if (Final_Review_NH_Random_2 != Final_Review_NH_Random_4 && Final_Review_NH_Random_1 != Final_Review_NH_Random_5) {

							// while �� Ż��

							break;

						}

					}

					// ���� j �� Look_Random �̶�� ==> ������ ����

					if (Final_Review_NH_Random_3 == j) {

						// LEVEL �� 1�̸� ���� ������ ���⸦, LEVEL �� 2�̸� ( 1�� �ƴϸ� ) �ܾ ������ ���⸦ ���

						if (LEVEL == 1) {

							printf("   Q%d. %s\n\n", j + 1, Array_Word[Final_Review_NH_Random_1][Final_Review_NH_Random_2]);

						}
						else {

							printf("   Q%d. %s\n\n", j + 1, Array_Meaning[Final_Review_NH_Random_1][Final_Review_NH_Random_2]);

						}

						// ���� j �� Look_Random �ƴ϶�� ==> ������ ����

					}
					else {

						// LEVEL �� 1�̸� ���� ������ ���⸦, LEVEL �� 2�̸� ( 1�� �ƴϸ� ) �ܾ ������ ���⸦ ���

						if (LEVEL == 1) {

							printf("   Q%d. %s\n\n", j + 1, Array_Word[Final_Review_NH_Random_5][Final_Review_NH_Random_4]);

						}
						else {

							printf("   Q%d. %s\n\n", j + 1, Array_Meaning[Final_Review_NH_Random_5][Final_Review_NH_Random_4]);

						}

					}

				}

				// �ٹٲ� * 3

				printf("\n\n\n");

				// ���� �Է¹ޱ�

				printf("   ������: ");
				scanf("%d", &Final_Review_NH_Answer);

				// �ܼ� ȭ�� ��µ� ����� �����

				system("cls");

				// ���� �Է��� ���� �����̶�� 

				if ((Final_Review_NH_Answer - 1) == Final_Review_NH_Random_3) {

					// ���� ���� ��Ʈ ���

					// ���ڻ��� ������, ������ ���� �Ͼ������ ����

					console_color_change(4, 15);

					printf("\n\n   �����Դϴ� !!\n\n\n");

					// ���ڻ��� ������, ������ ���� �Ͼ������ ����

					console_color_change(0, 15);

					// ���� ���� Ƚ�� ( ����Ʈ ) ����

					++Final_Review_O;

				}
				else {

					// ���� ��Ʈ ���

					printf("\n\n   �����Դϴ� !!\n\n\n");

					// ������ ������� Ȯ��

					// ���ڻ��� ������, ������ ���� �Ͼ������ ����

					console_color_change(4, 15);

					// LEVEL �� 1�̸� ���� ������ ���⸦, LEVEL �� 2�̸� ( 1�� �ƴϸ� ) �ܾ ������ ���⸦ ���

					if (LEVEL == 1) {

						printf("   ������ %s �Դϴ�.\n\n\n", Array_Word[Final_Review_NH_Random_1][Final_Review_NH_Random_2]);

					}
					else {

						printf("   ������ %s �Դϴ�.\n\n\n", Array_Meaning[Final_Review_NH_Random_1][Final_Review_NH_Random_2]);

					}

					// ���ڻ��� ������, ������ ���� �Ͼ������ ����

					console_color_change(0, 15);

					// ������ Ƚ�� ( ����Ʈ ) ����

					++Final_Review_X;

				}

				// �ܾ� �� ���� ( ���� �ܾ� )

				++Final_Review_Word;

			}

			// ���� ���̵��� Normal �̰ų� Hard �� �ƴϸ� ( Hell �̸� )

		}
		else {

			// �� ������ 200 �� �� ������ ��� �ݺ�

			while (1) {

				// �ܾ 200 �� �̻��̸� while �� Ż��

				if (Final_Review_Word >= 201) {

					break;

				}

				// 1 ~ 10 DAY �� �������� 1�� ����

				Final_Review_H_Random_1 = rand() % 10;

				// �������� 20 ���� �ܾ� �� 1�� ���� ( 0 ~ 19 ) 

				Final_Review_H_Random_2 = rand() % 20;

				// 20 �� �ݺ� ( 0 ~ 19 )

				for (int n = 0; n < 20; n++) {

					// 1 ~ 10 �� 1���� ����� ���� DAY ���� ( �Լ� �̿� )

					Change_Check_Overlaps_Pointer(Final_Review_H_Random_1);

					// ���� ���� ���� �ߺ����� �ƴ��� Ȯ��

					if (Final_Review_H_Random_2 == Check_Overlaps_Pointer[n]) {

						// ���� ���� �ߺ��� �ƴϸ� 100 �� ����

						// -> ������ �ߺ��� �ǰ� �ϱ� ���ؼ�

						Check_Overlaps_Pointer[n] = 100;

						// for �� ����

						break;

						// ���� ���� ���� �ߺ��̶��

					}
					else if ((n == 19) && (Check_Overlaps_Pointer[Final_Review_H_Random_2] == 100)) {

						// for ���� �ٽ� ������ ������ n �ʱ�ȭ

						n = -1;

						// rand �Լ��� �ٽ� ���� �� ����

						Final_Review_H_Random_1 = rand() % 10;

						Final_Review_H_Random_2 = rand() % 20;

						// continue �� �ٽ� �ݺ�

						continue;

					}

				}

				// �� ��° �ܾ�����, �� �ܾ��� ��, �� �ܾ��� DAY ���

				printf("   Q.%d : %s ( DAY %d )\n", Final_Review_Word, Array_Meaning[Final_Review_H_Random_1][Final_Review_H_Random_2], Final_Review_H_Random_1 + 1);

				// �ٹٲ� * 3

				printf("\n\n\n");

				// ���� �Է¹ޱ�

				printf("   ������: ");

				// %[^\n] = ���� ( \n ) �� ������ ��� ����

				scanf(" %[^\n]", Final_Review_H_Answer);

				// �ܼ� ȭ�� ��µ� ����� �����

				system("cls");

				// ���� �Է��� ���� ����� ������ ( �����̸� )

				if (strcmp(Final_Review_H_Answer, Array_Word[Final_Review_H_Random_1][Final_Review_H_Random_2]) == 0) {

					// ���� ���� ��Ʈ ���

					// ���ڻ��� ������, ������ ���� �Ͼ������ ����

					console_color_change(4, 15);

					printf("\n\n   �����Դϴ� !!\n\n\n");

					// ���ڻ��� ������, ������ ���� �Ͼ������ ����

					console_color_change(0, 15);

					// ���� ���� Ƚ�� ( ����Ʈ ) ����

					++Final_Review_O;

					// ���� �Է��� ���� ����� �ٸ��� ( �����̸� )

				}
				else {

					// ���� ��Ʈ ���

					printf("\n\n   �����Դϴ� !!\n\n\n");

					// ������ �������� Ȯ��

					// ���ڻ��� ������, ������ ���� �Ͼ������ ����

					console_color_change(4, 15);

					printf("   ������ %s �Դϴ�.\n\n\n", Array_Word[Final_Review_H_Random_1][Final_Review_H_Random_2]);

					// ���ڻ��� ������, ������ ���� �Ͼ������ ����

					console_color_change(0, 15);

					++Final_Review_X;
				}

				// �ܾ� �� ���� ( ���� �ܾ� )

				++Final_Review_Word;

			}

		}

		// ����, ���� ���� ���

		printf("\n   ���� ������ %d �� �Դϴ�. \n", Final_Review_O);
		printf("   Ʋ�� ������ %d �� �Դϴ�. \n", Final_Review_X);

	}
	else if (MODE == 4) {

		// HANG MAN GAME

		// ��� ����

		// --> 1��° ��� ĭ : ����, ����, �������Ḧ �Ǵ��ؼ� ����� �ִ� ĭ

		// --> 2��° ��� ĭ : ���� ���� ����� ǥ�� ��

		// --> 3��° ��� ĭ : ���° ���������� ������ ����� ( ������ ĭ �� ��ŭ _ �� ǥ�� )

		// --> 4��° ��� ĭ : ������� �Է��� ���ĺ��� �����ִ� ĭ

		// --> 5��° �Է� ĭ : ���ĺ��� Ű����κ��� �Է� ����

		// ����� 10���̸� ����� ���ų� 10������ ���߸� ���� ����

		// ���� �Լ� �ʱ�ȭ

		srand((unsigned)time(NULL));

		// �Ұ� ��Ʈ 

		// �ٹٲ�

		printf("\n");

		printf("==================================================================================================================================\n");
		printf("===================================================== WELCOME TO HANG MAN GAME ===================================================\n");
		printf("==================================================================================================================================\n\n");

		printf("==================================================================================================================================\n");
		printf("========================= ����� 10���̸� ����� ���ų� 10������ ���߸� ���� ���� ( ���� ���� : Enter ) ==========================\n");
		printf("==================================================================================================================================\n\n");

		// Enter �� �Է� �ޱ� ���� ��� 

		// �Է� ���� 1�� ���

		getchar();
		getchar();

		// ������ �� ���߰ų� ( 10 ���� ) ����� ������ 

		while (1) {

			// ȭ�鿡 ��µ� ��� ��� �����

			system("cls");

			// �����̸� ( ���� : 1, ���� : 0 )

			if (HangMan_O == 1) {

				// ������ ��� �ݺ����� �ʰ� �ʱ�ȭ

				HangMan_O = 0;

				// ������� �Էµ� ���ĺ��� ��� �������� �ʵ��� �ʱ�ȭ

				for (int x = 0; x < 30; x++) {

					HangMan_History_Array[x] = '\0';

				}

				// ���� ������ �Ѿ���ν� ������� �Է��� ���ĺ��� �ʱ�ȭ �ϱ����� �ʱ�ȭ

				HangMan_Temp_Int = 0;

				// ���� ������ �Ѿ���ν� ����� �Է��� ���ĺ� �� ���� �ʱ�ȭ

				HangMan_Count = 0;

				// ���� ������ �Ѿ�ٴ� ǥ��

				HangMan_Next_Question = 1;

				// ���� ����

				++HangMan_Question;

				// ���� ������ �Ѿ���ν� ��� �ʱ�ȭ ( �ٽ� 10 �� ) 

				HangMan_Heart = 10;

				// �ٹٲ� * 2

				printf("\n\n");

				// ���ڻ��� �Ķ���, ������ ���� �Ͼ������ ����

				console_color_change(1, 15);

				printf("   ���� ~~~ ������ ���ĺ��� �½��ϴ�\n\n\n");

				// ���ڻ��� ������, ������ ���� �Ͼ������ ����

				console_color_change(0, 15);

			}
			else if (HangMan_X == 1) {

				// ������ ��� �ݺ����� �ʰ� �ʱ�ȭ

				HangMan_X = 0;

				--HangMan_Heart;

				// �ٹٲ� * 2

				printf("\n\n");

				// ���ڻ��� ������, ������ ���� �Ͼ������ ����

				console_color_change(4, 15);

				printf("   �� !!! ������ ���ĺ��� �ƴմϴ�\n\n\n");

				// ���ڻ��� ������, ������ ���� �Ͼ������ ����

				console_color_change(0, 15);

			}
			else {

				// �ٹٲ� * 5

				printf("\n\n\n\n\n");

			}

			// ������ 10 �� �ʰ��̰ų�, ����� ���ٸ�

			if (HangMan_Question > 10) {

				printf("   �����մϴ� ~~~ ��� ������ ��� ���߼̽��ϴ�\n\n\n");

				// while �� ����

				break;

			}
			else if (HangMan_Heart == 0) {

				printf("   �Ф� ����� �����ϴ� ... ������ �ٽ� �����ϼ���\n\n\n");

				// while �� ����

				break;

			}

			// ���� ��� ���

			printf("   ���� ����� : ");

			// ���� 1 �� �� �� ��ȭ

			for (int i = 0; i < HangMan_Heart; i++) {

				printf("��");

			}

			// ���� ���� ������� ( Ȥ�� ó���̶�� )

			if (HangMan_Next_Question == 1) {

				// ��� ���� �������� �ʰ� �ʱ�ȭ

				HangMan_Next_Question = 0;

				// 0 ~ 9 �� ���� �� 1�� ����

				HangMan_Random_1 = rand() % 10;

				// 0 ~ 19 �� ���� �� 1�� ����

				HangMan_Random_2 = rand() % 20;

				// 20 �� �ݺ� ( 0 ~ 19 )

				for (int n = 0; n < 20; n++) {

					// 1 ~ 10 �� 1���� ����� ���� DAY ���� ( �Լ� �̿� )

					Change_Check_Overlaps_Pointer(HangMan_Random_1);

					// ���� ���� ���� �ߺ����� �ƴ��� Ȯ��

					if (HangMan_Random_2 == Check_Overlaps_Pointer[n]) {

						// ���� ���� �ߺ��� �ƴϸ� 100 �� ����

						// -> ������ �ߺ��� �ǰ� �ϱ� ���ؼ�

						Check_Overlaps_Pointer[n] = 100;

						// for �� ����

						break;

						// ���� ���� ���� �ߺ��̶��

					}
					else if ((n == 19) && (Check_Overlaps_Pointer[HangMan_Random_2] == 100)) {

						// for ���� �ٽ� ������ ������ n �ʱ�ȭ

						n = -1;

						// rand �Լ��� �ٽ� ���� �� ����

						HangMan_Random_1 = rand() % 10;

						HangMan_Random_2 = rand() % 20;

						// continue �� �ٽ� �ݺ�

						continue;

					}

				}

				// �������� ���� ���� �迭���� �ӽù迭�� ���� ( Strcpy )

				strcpy(HangMan_Temp_Char, Array_Word[HangMan_Random_1][HangMan_Random_2]);

				// �ӽù迭�� ���ڿ��� ���̸� ��ȯ

				HangMan_Length = strlen(HangMan_Temp_Char);

				// ���̸�ŭ �ӽ� �迭�� _ �� ����

				for (int h = 0; h < HangMan_Length; h++) {

					HangMan_Temp_Array[h] = '_';

				}

			}

			// �ٹٲ� * 5

			printf("\n\n\n\n\n");

			// ���� ���

			printf("   Q%d. ", HangMan_Question);

			// ���ڿ��� ���̸�ŭ _ �� ��� ( ó������ )

			for (int u = 0; u < HangMan_Length; u++) {

				printf("%c ", HangMan_Temp_Array[u]);

			}

			// �ٹٲ� * 5

			printf("\n\n\n\n\n");

			// ������� �Է��� ���ĺ� ���

			printf("   ������� �Է��� ���ĺ� : ");

			// ������� �Է��� ���ĺ��� ��� ( ó������ ������� )

			for (int x = 0; x < 30; x++) {

				printf("%c ", HangMan_History_Array[x]);

			}

			// �ٹٲ� * 5

			printf("\n\n\n\n\n");

			// �Է�ȭ�� ���

			printf("   ���ĺ��� �Է��ϼ��� :");

			// ���ĺ� �Է� ���� ( ���ڴ� & �� ���� )

			scanf(" %c", &HangMan_Answer);

			// �Է¹��� ���ĺ��� ������� �Է��� ���ĺ� �迭�� �߰�

			HangMan_History_Array[HangMan_Temp_Int] = HangMan_Answer;

			// �Է¹��� ���ĺ��� ������� �Է��� ���ĺ� �迭�� �߰��ϱ� ���� ����

			++HangMan_Temp_Int;

			// ����� �Է��� ���ĺ� ��

			for (int y = 0; y < HangMan_Length; y++) {

				// �Է��� ���ĺ��� �����϶�

				if (HangMan_Answer == Array_Word[HangMan_Random_1][HangMan_Random_2][y]) {

					// �ӽ� �迭�� _ ��� �Է��� ���ĺ� ����

					HangMan_Temp_Array[y] = HangMan_Answer;

					// ��� ���ĺ��� �� �´����� ī��Ʈ �ϱ� ���� ����

					++HangMan_Count;

					// �� ���ĺ��̶� ����� ������ ON ǥ�� ( ON : 1, OFF : 0 )

					HangMan_Switch = 1;

				}

				// ��� ���ĺ� �� �¾��� �� ( �Է��� ���ĺ���� ������ ��� ��ġ�Ҷ� )

				if (HangMan_Count >= HangMan_Length) {

					// ���� ���� ��� ǥ�� ( ���� : 1 )

					HangMan_O = 1;

					// for �� Ż��

					break;

				}

			}

			// ���ĺ��� ���� ���� �� ( �Է��� ���ĺ���� ������ ��� ��ġ���� ������ )

			if (HangMan_Switch == 0) {

				// ���� ���� ��� ǥ�� ( ���� : 1 )

				HangMan_X = 1;

			}

			// �� ���ĺ��� ��ġ�ؼ� ON �� �Ǿ��� �� ��� ON ���� �ʵ��� �ʱ�ȭ

			HangMan_Switch = 0;

		}

	}
	return 0;
}

void console_window() {

	// �ܼ�â ũ�� ����

	system("mode con cols=130 lines=40");

	// cols = ����, lines = ���� (���ΰ� ���κ��� ª��)

	// �ܼ�â ���� ����

	system("title EASY ENGLISH WORD BOOK");

	// �ܼ�â ���� + ���ڻ� ����

	system("color F0");
}

void console_color_change(int text_color, int background_color) {

	// ���ڻ� + ���� �ٲٱ�

	// ���ڻ��� ������, ������ ���� �Ͼ��

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text_color | (background_color << 4));

}


char choice_BMH(char* pointer_BMH) {

	// �ܾ��� ���� ���� ���� ��� 

	printf("==================================================================================================================================\n");
	printf("===== �ܾ��� ������ ������ �ּ���. ( �ܾ��� ������ Basic, Mid, High �� �ֽ��ϴ�. B, M, H �� ���ϴ� �ܾ��带 �Է��� �ּ���. ) =====\n");
	printf("==================================================================================================================================\n\n\n :");

	// B, M, H �� 1���� ���� �� ������ ��� �ݺ�

	while (1) {

		// �ܾ��� ���� �Է� ���� ( B, M, H �� 1�� )

		scanf(" %c", pointer_BMH);

		// �ٹٲ� * 1

		printf("\n");

		// �ܼ� ȭ�� ��µ� ����� �����

		system("cls");

		// ���� �Է� ���� ���� B, M, H ��� break �ƴ϶�� �ݺ�

		if (*pointer_BMH == 'B' || *pointer_BMH == 'M' || *pointer_BMH == 'H') {

			break;

		}
		else {

			printf("==================================================================================================================================\n");
			printf("===== ������ �ܾ����� �����ϴ� ... ( B, M, H �� ���ϴ� �ܾ����� �Է��� �ּ���. ) =================================================\n");
			printf("==================================================================================================================================\n\n\n :");

		}

		// �Է� ���� �� ( B, M, H ) Ȯ��

		// printf("%c", *pointer_BMH);
	}

	return 0;

}

int choice_mode(int* pointer_MODE) {

	// MODE �� ���� �� �� ���� ��� �ݺ�

	while (1) {

		// �ܾ��� MODE ���� ���� ���

		printf("==================================================================================================================================\n");
		printf("================================================== ���ϴ� MODE �� ������ �ּ���. =================================================\n");
		printf("==================================================================================================================================\n\n");

		printf("==================================================== LOOK MODE :         1�� =====================================================\n\n");
		printf("==================================================== REVIEW MODE :       2�� =====================================================\n\n");
		printf("==================================================== FINAL REVIEW MODE : 3�� =====================================================\n\n");
		printf("==================================================== ALPHABET GAME :     4�� =====================================================\n\n\n :");

		// �ܾ��� MODE �Է� ����

		scanf("%d", pointer_MODE);

		// �ٹٲ� * 1

		printf("\n\n");

		// �ܼ� ȭ�� ��µ� ����� �����

		system("cls");

		// ���� �Է� ���� ���� MODE �� �ִٸ� break �ƴ϶�� �ݺ�

		if (*pointer_MODE > 0 && *pointer_MODE <= 4) {

			break;

		}
		else {

			printf("==================================================================================================================================\n");
			printf("===== ������ MODE �� �����ϴ� ... �ٽ� ������ �ּ��� ... =========================================================================\n");
			printf("==================================================================================================================================\n\n\n");

		}

		// �Է� ���� ��

		// printf("%d", *pointer_MODE);
	}

	return 0;
}

int choice_day(int* pointer_DAY, int check_MODE) {

	// MODE �� 1�̸� "����" ��, MODE �� 2�̸� "����" �� ���

	char* Print_MODE = "����";

	if (check_MODE == 1) {
		Print_MODE = "����";
	}
	else if (check_MODE == 2) {
		Print_MODE = "����";
	}

	// DAY ���� ���� ��� 

	printf("==================================================================================================================================\n");
	printf("======================================= %s�� ���ϴ� DAY �� �Է��� �ּ���. ( 1 ~ 50 DAY ) =======================================\n", Print_MODE);
	printf("==================================================================================================================================\n\n\n :");

	// DAY ( 1 ~ 50 ) �� 1���� �Է��� ������ ��� �ݺ�

	while (1) {

		// DAY �Է� ���� ( 1 ~ 50 )

		scanf("%d", pointer_DAY);

		// �ٹٲ� * 1

		printf("\n");

		// �ܼ� ȭ�� ��µ� ����� �����

		system("cls");

		// ���� �Է� ���� ���� 1 ~ 50 �̶�� break �ƴ϶�� �ݺ�

		if (*pointer_DAY > 0 && *pointer_DAY <= 50) {

			break;

		}
		else {

			printf("==================================================================================================================================\n");
			printf("===== �Է��� DAY �� �����ϴ� ... ( 1 ~ 50 �� ���⸦ ���ϴ� DAY �� �Է��� �ּ���. ) ===============================================\n");
			printf("==================================================================================================================================\n\n\n :");

		}

		// �Է� ���� �� ( 1 ~ 50 ) Ȯ��

		// printf("%d", *pointer_DAY);
	}

	return 0;

}

int choice_level(int* pointer_LEVEL) {

	// LEVEL �� ���� �� �� ���� ��� �ݺ�

	while (1) {

		// �ܾ��� LEVEL ���� ���� ���

		printf("==================================================================================================================================\n");
		printf("================================================== ���ϴ� LEVEL �� ������ �ּ���. ================================================\n");
		printf("==================================================================================================================================\n\n");

		printf("======================================== NORMAL ( �� ����, �ܾ� 4�� �� 1�� Choice ) : 1�� ========================================\n\n");
		printf("======================================== HARD   ( �ܾ� ����, �� 4�� �� 1�� Choice ) : 2�� ========================================\n\n");
		printf("======================================== HELL   ( �� ����, �濡 �´� �ܾ� Write )   : 3�� ========================================\n\n\n :");

		// �ܾ��� MODE �Է� ����

		scanf("%d", pointer_LEVEL);

		// �ٹٲ� * 1

		printf("\n\n");

		// �ܼ� ȭ�� ��µ� ����� �����

		system("cls");

		// ���� �Է� ���� ���� MODE �� �ִٸ� break �ƴ϶�� �ݺ�

		if (*pointer_LEVEL > 0 && *pointer_LEVEL <= 3) {

			break;

		}
		else {

			printf("==================================================================================================================================\n");
			printf("===== ������ LEVEL �� �����ϴ� ... �ٽ� ������ �ּ��� ... ========================================================================\n");
			printf("==================================================================================================================================\n\n\n");

		}

		// �Է� ���� ��

		// printf("%d", *pointer_LEVEL);
	}

	return 0;
}

void Change_Check_Overlaps_Pointer(int random_number) {

	switch (random_number)
	{

	default:

		Check_Overlaps_Pointer = Check_Overlaps_1;

		break;

	case 0:

		Check_Overlaps_Pointer = Check_Overlaps_1;

		break;

	case 1:

		Check_Overlaps_Pointer = Check_Overlaps_2;

		break;

	case 2:

		Check_Overlaps_Pointer = Check_Overlaps_3;

		break;

	case 3:

		Check_Overlaps_Pointer = Check_Overlaps_4;

		break;

	case 4:

		Check_Overlaps_Pointer = Check_Overlaps_5;

		break;

	case 5:

		Check_Overlaps_Pointer = Check_Overlaps_6;

		break;

	case 6:

		Check_Overlaps_Pointer = Check_Overlaps_7;

		break;

	case 7:

		Check_Overlaps_Pointer = Check_Overlaps_8;

		break;

	case 8:

		Check_Overlaps_Pointer = Check_Overlaps_9;

		break;

	case 9:

		Check_Overlaps_Pointer = Check_Overlaps_10;

		break;

	}
}
