#define _CRT_SECURE_NO_WARNINGS // scanf ��� ���� 
#define _CRT_NONSTDC_NO_WARNINGS 
#define LEFT 75 // ���� ȭ��ǥ ( �� ) �� �ƽ�Ű �ڵ� ���� 
#define RIGHT 77 // ������ ȭ��ǥ ( �� ) �� �ƽ�Ű �ڵ� ���� 
#include <windows.h> // console â ���� 
#include <stdio.h> 
#include <stdlib.h>
#include <time.h> // �ð� ���� �Լ� ����
#include <string.h> // ���ڿ� ���� ����
#include <conio.h>
#include <mmsystem.h> // playsound �Լ� ���, ���� ����� �ʿ�
#pragma comment(lib,"winmm.lib")

// ������� �� ȿ���� ����
#define BGM_1 "C:\\Users\\user\\Desktop\\TestBgm\\�������򰡳뷡.wav"
#define BGM_2 "C:\\Users\\user\\Desktop\\TestBgm\\Girlslikeyou.wav"
#define BGM_3 "C:\\Users\\user\\Desktop\\TestBgm\\Peaches.wav"
#define BGM_4 "C:\\Users\\user\\Desktop\\TestBgm\\�λ���ȸ����.wav"
#define BGM_5 "C:\\Users\\user\\Desktop\\TestBgm\\������������.wav"
#define ADD "C:\\Users\\user\\Desktop\\TestBgm\\����.wav"
#define MINUS "C:\\Users\\user\\Desktop\\TestBgm\\����.wav"

// �ܾ� Basic, Mid, High ����
// _Word : �ܾ�
// _Meaning : ��
// _EXample_Word : ���� ����
// _Example_Meaning : ���� �ؼ�
// _Proverb_Word : �Ӵ� ����
// _Proverb_Meaning : �Ӵ� �ؼ�

// ���� Basic �� 1000���̰�, Mid, High �� ���� �ܾ �� �Է� X 
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
char Basic_Example_Word[10][20][10000] = {
	{"Water the plants.", "He got a part-time job.", "Anyway, thanks for helping me.", "He will depart Korea for China tomorrow.", "a news item", "This is my advice to you.", "She covered a child with a blanket.", "He knows how to fix it.", "I believe that there is no God.", "Are you in the fifth grade?", "They hit me on the head.", "I judge her (to be) honest.", "He kicked a football too high.", "Who took the first prize?", "He won the race.", "to stone her to death", "This blue vase is beautiful.", "Look at the stone wall.", "I have a nice car.", "It s very good."}
};
char Basic_Example_Meaning[10][20][10000] = {
	{"�Ĺ��� ���� �־��.", "�״� �ð��� ���ڸ��� �����.", "��·��, ���� ���� �༭ ������.", "�״� ���� �ѱ��� ���� �߱����� ����Ұž�.", "�Ź� ���", "�̰��� ���� �װ� �ִ� ����̴�.", "�׳�� ���� ���̸� ������.", "�״� �װ��� ��ĥ �� �ȴ�.", "���� ���� ���ٰ� �Ͼ�.", "����� 5�г��̿���?", "�׵��� ���� �Ӹ��� ���ȴ�.", "���� �׳డ �����ϴٰ� �Ǵ�(����)�Ѵ�.", "�״� �౸���� ���� �Ⱦ�á��.", "���� 1����� �޾ҳ�?", "�״� ���ֿ��� �¸��߾��.", "���� ���� �׳ฦ ���̴�.", "�� �Ķ� �ɺ��� �Ƹ����.", "������ ����.", "���� ���� ���� ������ �ִ�.", "�ſ� ����."}
};
char Basic_Proverb_Word[50][10000] = { "As the old cock crows, the young cock learns.", "A leopard cannot change its spots.", "A cat may look at the king.", "A drowning man grasp at a straw.", "A fool and his money soon part", "All is fish that comes to his net.", "A friend in need is a friend indeed.", "Actions speak louder than words.", "A wonder lasts but nine days.", "A burnt child dreads the fire.", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", };
char Basic_Proverb_Meaning[50][10000] = { "���� �� 3���̸� ǳ���� ���´�.", "ǥ���� ���� ������ ��ȣ��ų �� ����.", "������ �׿� ����ϴ� �Ǹ��� �ִ�.", "���� ���� ����� ��Ǫ���� ��´�.", "�ٺ��� �� �� ���� �� ���� ����.", "�ڱ� �ռ��� ������.", "��濡 ó���� �� ���� ģ���� ������ ģ���̴�.", "������ �ൿ�� �켱", "������ ���� �� ��; �� ����� �������� �Ǵ� ��", "�ҿ� �� ���̴� ���� ������ �Ѵ�.", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "" };
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
char Mid_Example_Word[10][20][10000] = {
	{"the control tower", "He makes an effort to improve the environment.", "It's my fault.", "the upper floor", "My goodness! You gained a lot of weight.", "I am very pleased to see you again.", "the lifetime employment", "Don't be mad at me!", "Suppose she would accept your offer.", "They took a good rest in the shade.", "Children are the treasure of our country.", "He acts as if he is a superman.", "a department store clerk", "He put his foot on a branch.", "How much did you pay for it?", "to sow the seed", "He shouted for help.", "He settled in Seuol after his father's death.", "My prime concern is to protect our environment", "He must be at least 40."}
};
char Mid_Example_Meaning[10][20][10000] = {
	{"���� ž", "�״� ȯ���� �����ϱ� ���� ����մϴ�.", "�� �߸��̾�. ", "����", "�̷�! �� �� ���� �ȴ�.", "�ʸ� �ٽ� ������ ��ڱ���.", "��� ���", "������ ȭ���� ��!", "�׳డ ���� ������ �����Ѵٰ� �����غ���.", "�׵��� �״ÿ��� �� ������.", "��̴� �츮������ �����̴�.", "�״� ��ġ �ڱⰡ ���۸��� ��ó�� �ൿ�Ѵ�.", "��ȭ�� ����", "�״� ���������� ���� �÷����Ҵ�.", "�� �����ߴ�?", "���� �Ѹ���", "�״� ���� �޶�� ���ƴ�.", "�״� �ƹ��� ��� �� ���￡ �����ߴ�.", "���� ù ��° ������ �츮�� ȯ���� ��ȣ�ϴ� ���̴�.", "�״� ��� 40���� �� �ž�."}
};
char Mid_Proverb_Word[50][10000] = { "Many drops make a shower.", "Two heads are better than one.", "Time files like an arrow.", "The pot calls the kettle black.", "Never judge by appearance!", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", };
char Mid_Proverb_Meaning[50][10000] = { "���� ������� �ҳ��⸦ �̷��.", "�� ����� �Ӹ��� �� ����� �Ӹ����� ����.", "�ð��� ȭ��� ���� ��������.", "���� �����ں��� ��Ĵٰ� �Ѵ�.", "���� �Ѹ������ �Ǵ����� ����!", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", };
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
char High_Example_Word[10][20][10000] = {
	{"She look care of a poor widow with four children in the neighborhood.", "In March 1919, Koreans declared independence from Japanese colonial rule.", "She wiped the tears from his eyes.", "I'm confident that I will get the job.", "Some people try hard to achieve a high position.", "a bird that represents good luck", "The best way to defend is attack.", "The food tastes awful.", "These days acid rain threatens our health.", "This book deals with global warming.", "The bird spread its wings to frighten its enemy.", "The martial art uses hands and fist to keep their attackers from attacking.", "He wins honor and glory.", "Vincent Van Gogh suffered from a mental illness.", "She wears a necklace of wooden beads", "Centipede is a small creature like an insect which has a long thin body and many legs.", "Wealth distribution could promote economic growth.", "This document contains details of weapon projects.", "This archers shot lots of fire arrows into the air.", "I look forward to hearing from you."}
};
char High_Example_Meaning[10][20][10000] = {
	{"�׳�� �̿��� �׾��̰� �ִ� ������ �̸����� �����Ҵ�.", "1919�� 3��, �ѱ� ������� �Ϻ��� �Ĺ���ġ�κ��� ������ �����ߴ�.", "�׳�� ���� ������ ������ �۾� �־���.", "���� �� ���� ���� ���� Ȯ����.", "������� ���� ������ ���� �ϱ����� ���� ����� �Ѵ�.", "����� �ǹ��ϴ� ��", "����ϴ� �ּ��� ����� �����ϴ� ���̴�.", "���� ���� ������ ���� ��.", "���� �꼺�� �츮�� �ǰ��� �����մϴ�.", "�� å�� ���� �³�ȭ�� ���� �ٷ�� �ִ�.", "�� ���� õ���� ���ֱ� ���� ������ ���.", "�� ������ �����ڰ� ������ ���ϵ��� �հ� �ָ��� ����Ѵ�.", "�״� ���� ������ �����.", "��Ʈ �� ����� ������ ��ȯ�� �ξҴ�.", "�׳�� ������ �� ���� �����(����)�� �ϰ� �ִ�.", "���״� ��� ���� ����� ���� �ٸ��� ���� ���� ���� ���� ����ü�̴�.", "���� ��й�� ���������� ���� �� �� �ִ�.", "�� �������� ���� ����� ���� ���λ����� ���ԵǾ��ִ�.", "�ü����� ������ ��ȭ���� �������� ��� �÷ȴ�.", "�ʷκ��� �ҽ��� �м�����Ѵ�.(��û ��ٸ���)"}
};
char High_Proverb_Word[50][10000] = { "Near heighbor is better than a distant cousin.", "Old habits die hard.", "Penny-wise and pound-foolish.", "Roses have thorns.", "Sow the wind and reap the whirlwind.", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", };
char High_Proverb_Meaning[50][10000] = { "�̿�����", "���� ������ ������ ��ƴ�.", "�ܵ����� �����ϰ�, ū������ �����.", "��̿��� ���ð� �ִ�.", "�Ƿ� �ְ� ���� �޴´�.", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", };

void console_window(); // �ܼ� â ũ�� �� ��ġ ����
void console_color_change(int text_color, int background_color); // ���� �� ���� �Լ�

char choice_BMH(char* pointer_BMH); // BMH ���� �Լ�
int choice_mode(int* pointer_MODE); // MODE ���� �Լ�
int choice_day(int* pointer_DAY, int check_MODE); // DAY ���� �Լ�
int choice_level(int* pointer_LEVEL); // LEVEL ���� �Լ�

void Designed(int); // "=" ��� �Լ�
void Print(int); // �ݺ��Ǵ� ���� ����
void Print_All(int, int, int); // �ݺ��Ǵ� ���� ����
int change_song(int*); // SONG ���� �Լ�
void gotoxy(int, int); // �ϴ� ���� ��� �Լ�

typedef struct Menu M; // ��ü �⺻ ����
typedef struct Menu1 M_1; // MODE 1�� ���� ����ü
typedef struct Menu2_3_4 M_2_3_4; // MODE 2,3,4 �� ���� ����ü

struct Menu {
	char BMH, TITLE[100];
	int MODE, DAY, LEVEL, OPTION, SONG, HH, GL;
	int Check_Overlap[20];
};
struct Menu1 {
	int Look_Page, LimitAgain;
	char Arrow;
};
struct Menu2_3_4 {
	int R1, R2, R3, R4, R5, Answer, Review_O, Review_X, HR1, HR2, RW;
	int Check_Overlap[20];
	char RHA[100];
};

int main() {
	// �ð��� ����ϱ� ���� ����
	time_t timer; // �ʴ����� �ð��� ���������� ǥ���ϴ� ������ ( ������ �ʿ��� )
	struct tm* t; // tm ����ü, timer �� ��������
	timer = time(NULL); // 1970�� 1�� 1�� 0�� 0�� 0�ʺ��� �����Ͽ� ��������� ��
	t = localtime(&timer); // �������� ���� ����ü�� �ֱ�

	// ������ �迭 ����
	char(*Array_Word)[20][100], (*Array_Meaning)[20][10000], (*Array_Example_Word)[20][10000], (*Array_Example_Meaning)[20][10000], (*Array_Proverb_Word)[10000], (*Array_Proverb_Meaning)[10000];
	char LEVEL_PRINT[5][10] = { "�ʵ��л�", "���л�", "����л�", "���л�", "�����" };
	M M1, MA[10], Ma;

	// �ܾ��� ����

	while (1) {
		FILE* Musicr = NULL; // ���� Music �б� 
		FILE* Musicw = NULL; // ���� Music ����
		FILE* Scorer = NULL; // HangMan Game �ְ� ��� �б�
		FILE* Scorew = NULL; // HangMan Game �ְ� ��� ����

		// HangMan �ְ��� �޾ƿͼ� �� �� ( HangMan_History )�� ���� ��� ���
		Scorer = fopen("HangMan.txt", "r");
		fscanf(Scorer, "%d", &M1.HH);
		fclose(Scorer);
		if (M1.HH <= 5)
			M1.GL = 0;
		else if (M1.HH <= 10)
			M1.GL = 1;
		else if (M1.HH <= 20)
			M1.GL = 2;
		else if (M1.HH <= 30)
			M1.GL = 3;
		else
			M1.GL = 4;

		// Music ��� �޾ƿͼ� ���� ���
		Musicr = fopen("Record.txt", "r");
		int FSONG;
		fscanf(Musicr, "%d", &FSONG);
		switch (FSONG)
		{
		case 1: PlaySound(TEXT(BGM_1), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT); break;
		case 2: PlaySound(TEXT(BGM_2), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT); break;
		case 3: PlaySound(TEXT(BGM_3), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT); break;
		case 4: PlaySound(TEXT(BGM_4), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT); break;
		case 5: PlaySound(TEXT(BGM_5), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT); break;
		}
		fclose(Musicr);

		// ������ ����ü�� �ߺ� üũ �迭 �ʱ�ȭ
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 20; j++)
			{
				MA[i].Check_Overlap[j] = j;
				Ma.Check_Overlap[j] = j;
			}
		}

		srand((unsigned)time(NULL)); // Random �� ��� 
		console_window(); // �ܼ� �⺻ ���� �Լ�
		console_color_change(4, 15); // �⺻ �� ����
		gotoxy(6, 36); // �ܼ� â�� �ٸ� ��ġ�� �̵� �Լ�
		printf("     [���� HANG MAN GAME �ְ� ����� : %d ��]     [����� ���� <%s> ���� �Դϴ�.]     [%d �� %d �� %d ��]", M1.HH, LEVEL_PRINT[M1.GL], t->tm_year + 1900, t->tm_mon + 1, t->tm_mday); 
		gotoxy(0, 0); // �ܼ� â�� �ٸ� ��ġ�� �̵� �Լ�
		Print_All(0, 1, 2);
		console_color_change(0, 15);
		choice_BMH(&M1.BMH); // BMH �� �ּҸ� ���� 
		if (M1.BMH == 'B') { // Basic �� ���ý� �ܾ��� Basic ����
			Array_Word = Basic_Word, Array_Meaning = Basic_Meaning, Array_Example_Word = Basic_Example_Word, Array_Example_Meaning = Basic_Example_Meaning, Array_Proverb_Word = Basic_Proverb_Word, Array_Proverb_Meaning = Basic_Proverb_Meaning;
		}
		else if (M1.BMH == 'M') { // Mid �� ���ý� �ܾ��� Mid ����
			Array_Word = Mid_Word, Array_Meaning = Mid_Meaning, Array_Example_Word = Mid_Example_Word, Array_Example_Meaning = Mid_Example_Meaning, Array_Proverb_Word = Mid_Proverb_Word, Array_Proverb_Meaning = Mid_Proverb_Meaning;
		}
		else if (M1.BMH == 'H') { // Hell �� ���ý� �ܾ��� Hell ����
			Array_Word = High_Word, Array_Meaning = High_Meaning, Array_Example_Word = High_Example_Word, Array_Example_Meaning = High_Example_Meaning, Array_Proverb_Word = High_Proverb_Word, Array_Proverb_Meaning = High_Proverb_Meaning;
		}
		else if (M1.BMH == 'Q') { // Q �� ���ý� ���� ����
			change_song(&M1.SONG);
			Musicw = fopen("Record.txt", "w");
			switch (M1.SONG)
			{
			case 1: PlaySound(TEXT(BGM_1), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT); fprintf(Musicw, "%d", 1); break;
			case 2: PlaySound(TEXT(BGM_2), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT); fprintf(Musicw, "%d", 2); break;
			case 3: PlaySound(TEXT(BGM_3), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT); fprintf(Musicw, "%d", 3); break;
			case 4: PlaySound(TEXT(BGM_4), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT); fprintf(Musicw, "%d", 4); break;
			case 5: PlaySound(TEXT(BGM_5), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT); fprintf(Musicw, "%d", 5); break;
			}
			fclose(Musicw);
			continue;
		}
		else if (M1.BMH == 'X') { // X �� ���ý� ���α׷� ����
			exit(0);
		}
		else {
			Print(1);
			exit(0);
		}
		choice_mode(&M1.MODE);
		if (M1.MODE == 1) { // MODE �� 1�϶� => LOOK MODE �϶�
			M_1 M2;
			M2.LimitAgain = 0, M2.Look_Page = 0;
			choice_day(&M1.DAY, M1.MODE);
			Print_All(0, 3, 2);
			printf("   < DAY %d - %d > \n\n\n", M1.DAY, M2.Look_Page + 1);
			printf("   - %s : ", Array_Word[M1.DAY - 1][M2.Look_Page]);
			printf("%s\n\n\n", Array_Meaning[M1.DAY - 1][M2.Look_Page]);
			printf("   EX) : %s ", Array_Example_Word[M1.DAY - 1][M2.Look_Page]);
			printf("   �� : %s", Array_Example_Meaning[M1.DAY - 1][M2.Look_Page]);
			while (1) {
				if (_kbhit()) {               // 1. while���ȿ��� Ű���� ������ �� if���� ����ȴ�.
					M2.Arrow = _getch();           // 2. ����Ű�� �Է��� �� 224 00 �� ���ۿ� �ִ�. 224���� ���ش�. 
					if (M2.Arrow == -32) {           // 3. -32�� �ԷµǸ�
						M2.Arrow = _getch();        // 4. ���� �� 00�� �Ǻ��Ͽ� �¿���� ���
						switch (M2.Arrow) {
						case LEFT: // ���� ȭ��ǥ ( �� ) �� ������ ��
							if (M2.LimitAgain == 0) { // ���� ȭ��ǥ�� ������ �� Look_Page �� 0 ~ 19 �� ��
								--M2.Look_Page; // ���� ȭ��ǥ��� 1�� ����. ( - )
							}
							else { // ���� ȭ��ǥ�� ������ �� Look_Page �� 0 ~ 19 �ƴ� �� ( �� -1 �϶� )
								M2.Look_Page = 19; // ���� ���� Look_Page �� �ٲ�
							}
							break;
						case RIGHT: // ������ ȭ��ǥ ( �� ) �� ������ ��
							if (M2.LimitAgain == 0) { // ������ ȭ��ǥ�� ������ �� Look_Page �� 0 ~ 19 �� ��
								++M2.Look_Page; // ������ ȭ��ǥ��� 1�� ���Ѵ�. ( + )
							}
							else { // ������ ȭ��ǥ�� ������ �� Look_Page �� 0 ~ 19 �ƴ� �� ( �� 20 �϶� )
								M2.Look_Page = 0; // ���� ���� Look_Page �� �ٲ�
							}
							break;
						}
						if (M2.Look_Page <= -1 || M2.Look_Page >= 20) { // ���� ������ �ϴ� �������� -1������ �̰ų� 20������ �϶� ( ���� �������� �϶� )
							system("cls");
							Print_All(0, 3, 2);
							printf("   < DAY %d - �߿� �Ӵ� ! > \n\n\n", M1.DAY);
							printf("   - %s : ", Array_Proverb_Word[M1.DAY - 1]);
							printf("%s", Array_Proverb_Meaning[M1.DAY - 1]);
							M2.LimitAgain = 1;
						}
						else { // ���� ������ �ϴ� �������� 1������ ~ 19 ������ �϶�
							system("cls");
							Print_All(0, 3, 2);
							printf("   < DAY %d - %d > \n\n\n", M1.DAY, M2.Look_Page + 1);
							printf("   - %s : ", Array_Word[M1.DAY - 1][M2.Look_Page]);
							printf("%s\n\n\n", Array_Meaning[M1.DAY - 1][M2.Look_Page]);
							printf("   EX) : %s ", Array_Example_Word[M1.DAY - 1][M2.Look_Page]);
							printf("   �� : %s", Array_Example_Meaning[M1.DAY - 1][M2.Look_Page]);
							M2.LimitAgain = 0;
						}
					}
					else if (M2.Arrow == 13) { // �ƽ�Ű �ڵ� 13�� Enter �̴�.
						break;
					}
				}
			}
		}else if (M1.MODE == 2) { // MODE �� 1�϶� => REVIEW MODE �϶�
			PlaySound(NULL, 0, 0); // ��� �뷡 OFF ȿ������ ���;� ������
			M_2_3_4 M3;
			M3.Review_O = 0, M3.Review_X = 0, M3.RW = 1;
			choice_day(&M1.DAY, M1.MODE); // REVIEW �� DAY ����
			choice_level(&M1.LEVEL); // LEVEL ���� ( NORMAL, HARD, HELL )
			Designed(0);
			printf("================================================== < REVIEW MODE > DAY %d REVIEW =================================================\n", M1.DAY);
			Designed(2);
			clock_t start_1 = clock(); // ���� �ð� ����
			if (M1.LEVEL == 1 || M1.LEVEL == 2) { // LEVEL �� NORMAL OR HARD �϶�, �� ������ �����϶�
				for (int i = 0; i < 20; i++) {
					M3.R1 = rand() % 4; // 1, 2, 3, 4 �� �Ѱ� �ڸ� ����
					if (M1.LEVEL == 1) { // �ܾ� �����̸�
						printf("   %d. %s \n\n\n", i + 1, Array_Meaning[M1.DAY - 1][i]);
					}
					else { // �� �����̸�
						printf("   %d. %s \n\n\n", i + 1, Array_Word[M1.DAY - 1][i]);
					}
					for (int j = 0; j < 4; j++) {
						while (1) {
							M3.R2 = rand() % 20;
							M3.R3 = rand() % 10;
							if (M3.R2 != i && M3.R3 != (M1.DAY - 1)) {
								break;
							}
						}
						if (M3.R1 == j) {
							if (M1.LEVEL == 1) {
								printf("   Q%d. %s\n\n", j + 1, Array_Word[M1.DAY - 1][i]);
							}
							else {
								printf("   Q%d. %s\n\n", j + 1, Array_Meaning[M1.DAY - 1][i]);
							}
						}
						else {
							if (M1.LEVEL == 1) {
								printf("   Q%d. %s\n\n", j + 1, Array_Word[M3.R3][M3.R2]);
							}
							else {
								printf("   Q%d. %s\n\n", j + 1, Array_Meaning[M3.R3][M3.R2]);
							}
						}
					}
					printf("\n\n\n");
					Print(5);
					scanf("%d", &M3.Answer);
					system("cls");
					if ((M3.Answer - 1) == M3.R1) {
						PlaySound(TEXT(ADD), NULL, SND_FILENAME | SND_ASYNC | SND_NODEFAULT);
						console_color_change(4, 15);
						Print(6);
						console_color_change(0, 15);
						++M3.Review_O;
					}
					else {
						PlaySound(TEXT(MINUS), NULL, SND_FILENAME | SND_ASYNC | SND_NODEFAULT);
						Print(7);
						console_color_change(4, 15);
						if (M1.LEVEL == 1) {
							printf("   ������ %s �Դϴ�.\n\n\n", Array_Word[M1.DAY - 1][i]);
						}
						else {
							printf("   ������ %s �Դϴ�.\n\n\n", Array_Meaning[M1.DAY - 1][i]);
						}
						console_color_change(0, 15);
						++M3.Review_X;
					}
				}
			}
			else {
				while (1) {
					if (M3.RW >= 21) {
						break;
					}
					printf("   DAY %d - %d : ", M1.DAY, M3.RW);
					M3.HR1 = rand() % 20;
					for (int n = 0; n < 20; n++) {
						if (M3.HR1 == Ma.Check_Overlap[n]) {
							Ma.Check_Overlap[n] = 100;
							break;
						}
						else if ((n == 19) && (Ma.Check_Overlap[M3.HR1] == 100)) {
							n = -1;
							M3.HR1 = rand() % 20;
							continue;

						}

					}
					printf("%s\n\n\n\n", Array_Meaning[M1.DAY - 1][M3.HR1]);
					Print(5);
					scanf(" %[^\n]", &M3.RHA);
					system("cls");
					if (strcmp(M3.RHA, Array_Word[M1.DAY - 1][M3.HR1]) == 0) {
						PlaySound(TEXT(ADD), NULL, SND_FILENAME | SND_ASYNC | SND_NODEFAULT);
						console_color_change(4, 15);
						Print(6);
						console_color_change(0, 15);
						++M3.Review_O;
					}
					else {
						PlaySound(TEXT(MINUS), NULL, SND_FILENAME | SND_ASYNC | SND_NODEFAULT);
						Print(7);
						console_color_change(4, 15);
						printf("   ������ %s �Դϴ�.\n\n\n", Array_Word[M1.DAY - 1][M3.HR1]);
						console_color_change(0, 15);
						++M3.Review_X;
					}
					++M3.RW;
				}
			}
			system("cls");
			printf("\n   ���� ������ %d �� �Դϴ�. \n\n", M3.Review_O);
			printf("   Ʋ�� ������ %d �� �Դϴ�. \n\n", M3.Review_X);
			clock_t end_1 = clock(); // �ڵ尡 ���� �ð� ����
			// �ɸ� �ð� ���
			// ����: ��(second)
			// CLOCKS_PER_SEC�� ������� �ʴ����� ���ɴϴ�.
			printf("   �ɸ� �ð� : %d ��\n\n", (int)(end_1 - start_1) / CLOCKS_PER_SEC);
			Print(34);
			getch();
		}else if (M1.MODE == 3) {
			PlaySound(NULL, 0, 0);
			M_2_3_4 M4;
			M4.Review_O = 0, M4.Review_X = 0, M4.RW = 1;
			choice_level(&M1.LEVEL);
			Print_All(0, 4, 2);
			clock_t start_2 = clock();
			if (M1.LEVEL == 1 || M1.LEVEL == 2) {
				while (1) {
					if (M4.RW >= 201) {
						break;
					}
					M4.R1 = rand() % 10;
					M4.R2 = rand() % 20;
					for (int n = 0; n < 20; n++) {
						if (M4.R2 == MA[M4.R1].Check_Overlap[n]) {
							MA[M4.R1].Check_Overlap[n] = 100;
							break;
						}
						else if ((n == 19) && (MA[M4.R1].Check_Overlap[M4.R2] == 100)) {
							n = -1;
							M4.R1 = rand() % 10;
							M4.R2 = rand() % 20;
							continue;
						}
					}
					M4.R3 = rand() % 4;
					if (M1.LEVEL == 1) {
						printf("   %d. %s \n\n\n", M4.RW, Array_Meaning[M4.R1][M4.R2]);
					}
					else {
						printf("   %d. %s \n\n\n", M4.RW, Array_Word[M4.R1][M4.R2]);
					}
					for (int j = 0; j < 4; j++) {
						while (1) {
							M4.R4 = rand() % 20;
							M4.R5 = rand() % 10;
							if (M4.R2 != M4.R4 && M4.R1 != M4.R5) {
								break;
							}
						}
						if (M4.R3 == j) {
							if (M1.LEVEL == 1) {
								printf("   Q%d. %s\n\n", j + 1, Array_Word[M4.R1][M4.R2]);
							}
							else {
								printf("   Q%d. %s\n\n", j + 1, Array_Meaning[M4.R1][M4.R2]);
							}
						}
						else {
							if (M1.LEVEL == 1) {
								printf("   Q%d. %s\n\n", j + 1, Array_Word[M4.R5][M4.R4]);
							}
							else {
								printf("   Q%d. %s\n\n", j + 1, Array_Meaning[M4.R5][M4.R4]);
							}
						}
					}
					printf("\n\n\n");
					Print(5);
					scanf("%d", &M4.Answer);
					system("cls");
					if ((M4.Answer - 1) == M4.R3) {
						PlaySound(TEXT(ADD), NULL, SND_FILENAME | SND_ASYNC | SND_NODEFAULT);
						console_color_change(4, 15);
						Print(6);
						console_color_change(0, 15);
						++M4.Review_O;
					}
					else {
						PlaySound(TEXT(MINUS), NULL, SND_FILENAME | SND_ASYNC | SND_NODEFAULT);
						Print(7);
						console_color_change(4, 15);
						if (M1.LEVEL == 1) {
							printf("   ������ %s �Դϴ�.\n\n\n", Array_Word[M4.R1][M4.R2]);
						}
						else {
							printf("   ������ %s �Դϴ�.\n\n\n", Array_Meaning[M4.R1][M4.R2]);
						}
						console_color_change(0, 15);
						++M4.Review_X;
					}
					++M4.RW;
				}
			}
			else {
				while (1) {
					if (M4.RW >= 201) {
						break;
					}
					M4.HR1 = rand() % 10;
					M4.HR2 = rand() % 20;
					for (int n = 0; n < 20; n++) {
						if (M4.HR2 == MA[M4.HR1].Check_Overlap[n]) {
							MA[M4.HR1].Check_Overlap[n] = 100;
							break;
						}
						else if ((n == 19) && (MA[M4.HR1].Check_Overlap[M4.HR2] == 100)) {
							n = -1;
							M4.HR1 = rand() % 10;
							M4.HR2 = rand() % 20;
							continue;
						}
					}
					printf("   Q.%d : %s ( DAY %d )\n\n\n\n", M4.RW, Array_Meaning[M4.HR1][M4.HR2], M4.HR1 + 1);
					Print(5);
					scanf(" %[^\n]", &M4.RHA);
					system("cls");
					if (strcmp(M4.RHA, Array_Word[M4.HR1][M4.HR2]) == 0) {
						console_color_change(4, 15);
						Print(6);
						console_color_change(0, 15);
						++M4.Review_O;
					}
					else {
						Print(7);
						console_color_change(4, 15);
						printf("   ������ %s �Դϴ�.\n\n\n", Array_Word[M4.HR1][M4.HR2]);
						console_color_change(0, 15);
						++M4.Review_X;
					}
					++M4.RW;
				}
			}
			printf("\n   ���� ������ %d �� �Դϴ�. \n", M4.Review_O);
			printf("   Ʋ�� ������ %d �� �Դϴ�. \n", M4.Review_X);
			clock_t end_2 = clock();
			printf("   �ɸ� �ð� : %d ��\n\n", (int)(end_2 - start_2) / CLOCKS_PER_SEC);
			Print(34);
			getch();
		}
		else if (M1.MODE == 4) {
			PlaySound(NULL, 0, 0);
			M_2_3_4 M5;
			M5.Review_O = 0, M5.Review_X = 0, M5.RW = 1;
			int HangMan_Question = 1;
			int HangMan_Next_Question = 1;
			char HangMan_Temp_Char[30];
			int HangMan_Length;
			char HangMan_Temp_Array[30];
			int HangMan_Temp_Int = 0;
			char HangMan_History_Array[30] = "";
			char HangMan_Answer;
			int HangMan_Count = 0;
			int HangMan_Switch = 0;
			int HangMan_Heart = 10;
			clock_t start_3 = clock(); // ���� �ð� ����
			printf("\n");
			Print_All(0, 8, 0);
			Print_All(1, 9, 1);
			getchar();
			getchar();
			while (1) {
				system("cls");
				if (M5.Review_O == 1) {
					PlaySound(TEXT(ADD), NULL, SND_FILENAME | SND_ASYNC | SND_NODEFAULT);
					M5.Review_O = 0;
					for (int x = 0; x < 30; x++) {
						HangMan_History_Array[x] = '\0';
					}
					HangMan_Temp_Int = 0, HangMan_Count = 0, HangMan_Next_Question = 1, ++HangMan_Question, HangMan_Heart = 10;
					printf("\n\n");
					console_color_change(1, 15);
					Print(10);
					console_color_change(0, 15);
				}else if (M5.Review_X == 1) {
					PlaySound(TEXT(MINUS), NULL, SND_FILENAME | SND_ASYNC | SND_NODEFAULT);
					M5.Review_X = 0;
					--HangMan_Heart;
					printf("\n\n");
					console_color_change(4, 15);
					Print(11);
					console_color_change(0, 15);
				}
				else {
					printf("\n\n\n\n\n");
				}
				if (HangMan_Heart == 0) {
					if (HangMan_Question > M1.HH)
					{
						Scorew = fopen("HangMan.txt", "w");
						fprintf(Scorew, "%d", HangMan_Question);
						fclose(Scorew);
					}
					console_color_change(4, 15);
					printf("   ���� : %s \n\n\n", Array_Word[M5.R1][M5.R2]);
					console_color_change(0, 15);
					Print(13);
					clock_t end_3 = clock();
					printf("   �ɸ� �ð� : %d ��\n\n", (int)(end_3 - start_3) / CLOCKS_PER_SEC);
					Print(34);
					getch();
					break;
				}
				Print(14);
				for (int i = 0; i < HangMan_Heart; i++) {
					Print(15);
				}
				if (HangMan_Next_Question == 1) {
					HangMan_Next_Question = 0;
					M5.R1 = rand() % 10;
					M5.R2 = rand() % 20;
					for (int n = 0; n < 20; n++) {
						if (M5.R2 == MA[M5.R1].Check_Overlap[n]) {
							MA[M5.R1].Check_Overlap[n] = 100;
							break;
						}
						else if ((n == 19) && (MA[M5.R1].Check_Overlap[M5.R2] == 100)) {
							n = -1;
							M5.R1 = rand() % 10;
							M5.R2 = rand() % 20;
							continue;
						}
					}
					strcpy(HangMan_Temp_Char, Array_Word[M5.R1][M5.R2]);
					HangMan_Length = strlen(HangMan_Temp_Char);
					for (int h = 0; h < HangMan_Length; h++) {
						if (HangMan_Temp_Char[h] == ' ')
						{
							HangMan_Temp_Array[h] = ' ';
							++HangMan_Count;
						}
						else {
							HangMan_Temp_Array[h] = '_';
						}
					}
				}
				printf("\n\n\n\n\n");
				printf("   Q%d. ", HangMan_Question);
				for (int u = 0; u < HangMan_Length; u++) {
					printf("%c ", HangMan_Temp_Array[u]);
				}
				printf("\n\n\n\n\n");
				Print(16);
				for (int x = 0; x < 30; x++) {
					printf("%c ", HangMan_History_Array[x]);
				}
				printf("\n\n\n\n\n");
				Print(17);
				scanf(" %c", &HangMan_Answer);

				for (int i = 0; i < 30; i++)
				{
					if (HangMan_Answer == HangMan_History_Array[i])
					{
						goto case1;
					}
				}

				HangMan_History_Array[HangMan_Temp_Int] = HangMan_Answer;
				++HangMan_Temp_Int;
				for (int y = 0; y < HangMan_Length; y++) {
					if (HangMan_Answer == Array_Word[M5.R1][M5.R2][y]) {
						HangMan_Temp_Array[y] = HangMan_Answer;
						++HangMan_Count;
						HangMan_Switch = 1;
					}
					if (HangMan_Count >= HangMan_Length) {
						M5.Review_O = 1;
						break;
					}

				}
				if (HangMan_Switch == 0) {
				case1:
					M5.Review_X = 1;
				}
				HangMan_Switch = 0;
			}
		}
	}
	return 0;
}
void console_window() {
	system("mode con cols=130 lines=40");
	system("title EASY ENGLISH WORD BOOK");
	system("color F0");
}
void console_color_change(int text_color, int background_color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text_color | (background_color << 4));
}
char choice_BMH(char* pointer_BMH) {
	Print_All(0, 18, 2);
	printf(" :");
	while (1) {
		scanf(" %c", pointer_BMH);
		printf("\n");
		system("cls");
		if (*pointer_BMH == 'B' || *pointer_BMH == 'M' || *pointer_BMH == 'H' || *pointer_BMH == 'Q' || *pointer_BMH == 'X') {
			break;
		}
		else {
			Print_All(0, 19, 2);
			printf(" :");
		}
	}
	return 0;
}
int choice_mode(int* pointer_MODE) {
	while (1) {
		Print_All(0, 20, 1);
		Print(21);
		scanf("%d", pointer_MODE);
		rewind(stdin);
		printf("\n\n");
		system("cls");
		if (*pointer_MODE > 0 && *pointer_MODE <= 4) {
			break;
		}
		else {
			Print_All(0, 22, 2);
		}
	}
	return 0;
}
int choice_day(int* pointer_DAY, int check_MODE) {
	Designed(0);
	if (check_MODE == 1) {
		Print(35);
	}
	else if (check_MODE == 2) {
		Print(36);
	}
	Designed(2);
	printf(" :");
	while (1) {
		scanf("%d", pointer_DAY);
		rewind(stdin);
		printf("\n");
		system("cls");
		if (*pointer_DAY > 0 && *pointer_DAY <= 50) {
			break;
		}
		else {
			Print_All(0, 23, 2);
			printf(" :");
		}
	}
	return 0;
}
int choice_level(int* pointer_LEVEL) {
	while (1) {
		Print_All(0, 24, 1);
		Print(25);
		scanf("%d", pointer_LEVEL);
		printf("\n\n");
		system("cls");
		if (*pointer_LEVEL > 0 && *pointer_LEVEL <= 3) {
			break;
		}
		else {
			Print_All(0, 26, 2);
		}
	}
	return 0;
}
void Designed(int n) {
	printf("==================================================================================================================================\n");
	for (int i = 0; i < n; i++)
	{
		printf("\n");
	}
}
void Print(int a) {

	switch (a)
	{
	case 1: printf("========================================== EASY ENGLISH �ܾ��忡 ���� ���� ȯ���մϴ�. ===========================================\n"); break;
	case 2: printf("\n\n ���� �Դϴ� ... \n\n"); break;
	case 3: printf("============= < LOOK MODE > ���� �ܾ� ���� = ������ ȭ��ǥ ( �� ), ���� �ܾ� ���� = ���� ȭ��ǥ ( �� ), ���� = Enter =============\n"); break;
	case 4: printf("====================================================== < FINAL REVIEW MODE > =====================================================\n"); break;
	case 5: printf("   ������: "); break;
	case 6: printf("\n\n   �����Դϴ� !!\n\n\n"); break;
	case 7: printf("\n\n   �����Դϴ� !!\n\n\n"); break;
	case 8: printf("===================================================== WELCOME TO HANG MAN GAME ===================================================\n"); break;
	case 9: printf("================================= ����� 10���̸� ����� ������ ���� ���� ( ���� ���� : Enter ) ==================================\n"); break;
	case 10: printf("   ���� ~~~ ������ ���ĺ��� �½��ϴ�\n\n\n"); break;
	case 11: printf("   �� !!! ������ ���ĺ��� �ƴմϴ�\n\n\n"); break;
	case 12: printf("   �����մϴ� ~~~ ��� ������ ��� ���߼̽��ϴ�\n\n\n"); break;
	case 13: printf("   �Ф� ����� �����ϴ� ... ������ �ٽ� �����ϼ���\n\n\n"); break;
	case 14: printf("   ���� ����� : "); break;
	case 15: printf("��"); break;
	case 16: printf("   ������� �Է��� ���ĺ� : "); break;
	case 17: printf("   ���ĺ��� �Է��ϼ��� :"); break;
	case 18: printf("   �ܾ��� ������ ������ �ּ���. ( �ܾ��� ������ Basic, Mid, High �� �ֽ��ϴ�. [B], [M], [H] �� ���ϴ� �ܾ��带 �Է��� �ּ���. )   \n\n");
		printf("                                           [�뷡 �ٲٱ�] : [Q] / [���α׷� ����] : [X]                                            \n"); break;
	case 19: printf("                            ������ �ܾ����� �����ϴ� ... ( B, M, H �� ���ϴ� �ܾ����� �Է��� �ּ���. )                            \n\n");
		printf("                                           [�뷡 �ٲٱ�] : [Q] / [���α׷� ����] : [X]                                            \n"); break;
	case 20: printf("================================================== ���ϴ� MODE �� ������ �ּ���. =================================================\n"); break;
	case 21: printf("==================================================== LOOK MODE :         1�� =====================================================\n\n");
		printf("==================================================== REVIEW MODE :       2�� =====================================================\n\n");
		printf("==================================================== FINAL REVIEW MODE : 3�� =====================================================\n\n");
		printf("==================================================== ALPHABET GAME :     4�� =====================================================\n\n\n :"); break;
	case 22: printf("===== ������ MODE �� �����ϴ� ... �ٽ� ������ �ּ��� ... =========================================================================\n"); break;
	case 23: printf("===== �Է��� DAY �� �����ϴ� ... ( 1 ~ 50 �� ���⸦ ���ϴ� DAY �� �Է��� �ּ���. ) ===============================================\n"); break;
	case 24: printf("================================================== ���ϴ� LEVEL �� ������ �ּ���. ================================================\n"); break;
	case 25: printf("======================================== NORMAL ( �� ����, �ܾ� 4�� �� 1�� Choice ) : 1�� ========================================\n\n");
		printf("======================================== HARD   ( �ܾ� ����, �� 4�� �� 1�� Choice ) : 2�� ========================================\n\n");
		printf("======================================== HELL   ( �� ����, �濡 �´� �ܾ� Write )   : 3�� ========================================\n\n\n :"); break;
	case 26: printf("===== ������ LEVEL �� �����ϴ� ... �ٽ� ������ �ּ��� ... ========================================================================\n"); break;
	case 30: printf("========================================================== �뷡 �ٲٱ� ===========================================================\n"); break;
	case 31: printf("==================================================== [�������򰡳뷡] : 1�� ====================================================\n");
		printf("==================================================== [Girlslikeyou] :     2�� ====================================================\n");
		printf("==================================================== [Peaches] :          3�� ====================================================\n");
		printf("==================================================== [�λ���ȸ����] :   4�� ====================================================\n");
		printf("==================================================== [������������] :     5�� ====================================================\n"); break;
	case 32: printf("===== ������ SONG �� �����ϴ� ... �ٽ� ������ �ּ��� ... =========================================================================\n"); break;
	case 33: printf("========================================================= �ܾ��� ����� ==========================================================\n"); break;
	case 34: printf("   ó�� �޴��� ���ư��÷��� �ƹ�Ű�� �����ּ���..."); break;
	case 35: printf("======================================= ���⸦ ���ϴ� DAY �� �Է��� �ּ���. ( 1 ~ 50 DAY ) =======================================\n"); break;
	case 36: printf("======================================= ������ ���ϴ� DAY �� �Է��� �ּ���. ( 1 ~ 50 DAY ) =======================================\n"); break;
	}
}
void Print_All(int a, int b, int c) {
	Designed(a);
	Print(b);
	Designed(c);
}
int change_song(int* pointer_SONG) {
	while (1) {
		Print_All(0, 30, 2);
		Print_All(0, 31, 0);
		printf("\n\n : ");
		scanf("%d", pointer_SONG);
		printf("\n\n");
		system("cls");
		if (*pointer_SONG > 0 && *pointer_SONG <= 5) {
			break;
		}
		else {
			Print_All(0, 32, 2);
		}
	}
	return 0;
}
void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}