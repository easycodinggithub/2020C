// 주석 및 시행착오


#define _CRT_SECURE_NO_WARNINGS // scanf 경고 무시 

#define LEFT 75 // 왼쪽 화살표 ( ← ) 의 아스키 코드 정의 

#define RIGHT 77 // 오른쪽 화살표 ( → ) 의 아스키 코드 정의 

#include <windows.h> // console 창 설정 

#include <stdio.h> 

#include <stdlib.h>

#include <time.h> // 시간 관련 함수 모음

#include <string.h> // 문자열 관련 모음

// 음악 재생시 필요

#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")


// ---------- Basic 배열 ----------


// Basic_Word 단어 배열  

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

// Basic_Meaning 단어 뜻 배열 

char Basic_Meaning[20][20][10000] = {

	// 1 ~ 10 DAY

	{"[동] 물을 주다 / [명] 물", "[명] 일, 직업", "[부] 어쨌든, 아무튼, 결국", "[동] 떠나자, 출발하다, 벗어나다", "[명] 항목, 품목, 신문 기사", "[명] 충고, 조언", "[동] 덮다, 씌우다, 여행하다, 포함하다, 보상하다 / [명] 덮개", "[동] 고치다, 수리하다, 고정시키다", "[명] 신, 하나님, 조물주", "[동] 등급을 매기다, 선별하다 / [명] 성적, 등급, 계급, 학년", "[동] 때리다, 치다 / [명] 침, 타격, 행운", "[동] 판단한다, 재판한다 / [명] 재판관, 판사, 심판", "[동] 차다, 걷어차다 / [명] 차기", "[명] 상, 상품, 경품", "[동] 경주하다 / [명] 경주, 인종", "[명] 돌, 돌맹이, 석재 / [동] 돌을 던지다", "[명] 꽃병", "[명] 벽, 담", "[동] 가지고 있다, 소유하다", "[형] 좋은, 착한, 친절한 / [명] 이익, 소용"},
	{"[명] 동물, 짐승", "[형] 바쁜, 번화한, (전화)통화중인", "[명] 장, 우두머리, 선장", "[명] 이메일 친구", "[대] 모두, 모든 사람", "[명] 친구, 벗", "[명] 재미, 즐거움 / [형] 재미 있는, 즐거운, 유쾌한", "[동] 좋아하다 / [전] ~와 같이, ~처럼", "[동] 살다, 살아 있다 / [형] 살아있는, 생생한, 생방송의", "[명] 수학", "[명] 5 월", "[명] 음악", "[명] 이름, 명성 / [동] 이름을 붙이다, 명명하다", "[형] 좋은, 친절한, 멋진", "[명] 별명, 애칭", "[형] 나이 먹은, ~살의", "[형] 예쁜, 귀여운 / [부] 꽤, 상당히, 매우", "[명] 과학", "[명] 바다", "[명] 물가, 해안, 강가"},
	{"[명] 강, 하천", "[명] 오솔길, 골목, 좁은 길", "[동] 놀라게 하다 / [명] 놀람, 경악", "[명] 만, 골, 갈라진 틈", "[형] 그밖의, 다른 / [부] 그밖에, 달리", "[형] 새로운, 신선한", "[동] 가져오다, 데려오다, 초래하다", "[동] 짓다, 건축하다, 쌓아올리다", "[전] ~이 없이, ~이 없는", "A를 B로 덮다", "[조] ~해야 한다, ~일 것이다", "[형] 부유한, 풍부한", "[동] 걷다, 산책하다 / [명] 산책", "[부] 어디든지, 아무데도, 어딘가에", "[형] 다른, 별개의", "[명] 자전거", "[동] 불평하다, 투덜거리다, 호소하다", "[동] 춤추다 / [명] 댄스, 무용", "[형] 이른, 초기의 / [부] 일찍이", "[동] 즐기다"},
	{"[형] 행복한, 기쁜", "[동] 떠나다, 내버려 두다, 남겨두다", "[형] 긴, 오래 걸리는", "[부] 가까이 / [형] 가까운", "[동] 노래하다, 부르다", "[부] 때로는, 가끔, 때때로", "[명] (미국) 지하철, (영국) 지하도", "[동] 말하다, 이야기하다 / [명] 이야기", "[형] 열망하는, 걱정하는, 갈망하는", "차에 타다", "[부] 그때에, 그 다음에, 그리고 나서, 그러면", "[명] 시간, 기간, 일생, 때 / [동] 시간을 재다, 시기에 맞추다", "[부] 어디에, 어디를, 어디에서", "[동] 쓰다, 글을 쓰다, 편지를 쓰다", "[동] 용서하다", "[명] 우정, 우애", "[명] 사진 / [동] 사진을 찍다", "[형] 어려운, 힘든, 곤란한", "[동] 함께 나누다, 분담하다, 공유하다 / [명] 몫, 분배", "~하는데 어려움이 있다"},
	{"[동] 충고하다, 조언하다, 권고하다", "[형] 친절한, 친한", "[형] 웃기는, 재미있는, 익살맞은", "[명] 수학", "[조] (조동사 may 의 과거형) ~일지도 모른다, ~해도 좋다 / [명] 힘", "[명] 음악가", "[동] 원하다", "~에 익숙하다, ~을 잘하다", "~와 같은, ~와 닮은", "~없이 살다", "[형] 과학적인, 과학의", "[명] 해안, 해변, 바닷가", "[명] 불평, 불만", "[형] 가까운 / [부] 가까이에, 근처에", "[명] 가수", "[명] 사진가, 사진작가", "[명] 어려움, 곤란", "~이름을 따서 짓다", "~하고 싶다", "~하고는 놀라다"},
	{"[동] 정보를 검색하다, 파도타기를 하다", "[형] 유일한, 단 하나뿐인 / [부] 단지, 오직", "[동] 돕다, 도와주다 / [명] 도움, 원조", "[동] 굽다, 빵을 굽다", "[명] 야구, 야구공", "[명] 농구, 농구공", "[명] 만화, 만화영화", "[동] 더하다, 추가하다, 덧붙여 말하다, 합치다", "[동] 팔다, 판매하다, 팔리다", "모이다, 만나다", "[명] 곤봉, 클럽, 동아리 / [동] 곤봉으로 때리다", "[명] 요리", "[형] 맛있는, 맛좋은", "[동] 그리다, 끌어 당기다, 뽑다", "[동] 접다, 끼다, 구부리다", "[명] 운, 행운, 재산, 부", "[명] 기타", "[동] 만들다, 하게하다, 시키다", "[동] 섞다, 섞이다, 사이좋게 지내다, 혼합하다 / [명] 혼합", "~에 대해 걱정하다"},
	{"[명] 영화", "[명] 대통령, 사장, 회장, 의장", "[명] 축구", "[동] 시작하다, 출발하다 / [명] 시작, 출발", "[명] 물건, 것, 일", "[부] 함께, 같이", "[동] 방문하다 / [명] 방문", "[동] 지켜보다, 관찰하다, 주시하다, 망보다 / [명] 손목시계", "[명] 충격, 쇼크 / [동] 충격을 주다, 깜짝 놀라게 하다", "적어두다, 기록하다, 써두다", "[동] 걱정시키다, 걱정하다, 속 태우다, 고민하다 / [명] 걱정, 근심", "[형] 최후의, 마지막의, 지난 / [동] 지속하다, 계속하다", "[명] 주제, 과목", "[동] 결정하다, 결심하다", "[명] 사막", "[명] 예, 보기", "[동] 참가하다, 연결하다, 결합하다", "[명] 재료, 물건 / [동] 채우다, 채워 넣다, 속을 채우다", "[명] 마당, 뜰", "곧장, 곧바로, 지금 당장"},
	{"[형] 큰, 중대한", "[형] 검은, 암흑의 / [명] 검정, 검정 옷, 흑인", "[형] 갈색의 / [명] 갈색", "[형] 가장 좋아하는, 매우 좋아하는, 마음에 드는 / [명] 좋아하는 사람", "[명] 여성, 암컷 / [형] 여성의, 암컷의", "[명] 음식", "[명] 머리카락, 털, 머리털", "[형] 재미있는, 흥미 있는", "[명] 밀짚, 짚, 빨대", "본인이 직접, 몸소, 직접", "[형] 굳은, 단단한, 어려움, 힘든 / [부] 굳게, 단단히, 열심히", "[명] 다리", "[명] 도마뱀", "[명] 사람, 개인, 인간", "[명] 애완동물", "[형] 작은, 좁은", "[명] 거미", "[형] 이상한, 낯선, 모르는", "[명] 읍, 도시, 도회지", "예를 들어, 예를 들자면 = (for instance)"},
	{"[명] 거북", "[동] 요리하다 / [명] 요리사", "[명] 장미", "[형] 인간의, 사람의, 인간다운 / [명] 사람, 인간, 인류", "[명] 학과, 수업, 교훈", "[명] 막대기, 장대, 기둥, 극(남극, 북극)", "[명] 제목, 표제, 직함, 명칭", "[명] 생각, 이념, 착상, 아이디어", "[동] 건드리다, 만지다, 접촉하다 / [명] 만짐, 손을 댐, 접촉", "[형] 양지바른, 해가 비치는", "[명] 장난감", "[명] 방법, 길", "[명] 팔, 무기 / [동] 무장시키다", "[동] 믿다, 신뢰하다, ~라고 생각하다", "[명] 카메라", "[동] 가지고 가다, 나르다, 운반하다, 전하다, 보도하다", "[형] 깨끗한, 청결한 / [동] 청소하다, 청결하게 하다", "[동] 명령하다, 지휘하다 / [명] 명령, 지배력", "[동] 울다, 외치다 / [명] 고함, 울부짖는 소리", "도와주다, 돕다"},
	{"[명] 방문객, 손님", "[명] 결정, 결심, 결단력", "[명] 벼룩시장, 거라지 세일", "[명] 남성, 수컷 / [형] 남성의, 수컷의", "[형] 개인의", "[명] 날씨", "[명] 낯선 사람, 모르는 사람, 생소한 사람", "[형] 근면한", "마침내, 마지막에", "~에 대해 생각하다", "[형] 믿을 수 있는", "[명] 개성, 성격", "[명] 인간", "A뿐만 아니라 B도 마찬가지로", "A뿐만 아니라 B도 마찬가지로", "이행하다, 실행하다, 수행하다", "깨끗이 치우다, 청소하다", "숙제를 하다", "~를 향해 떠나다", "~에 관해 이야기를 나누다"},

	// 11 ~ 20 DAY

	{"[명] 공장", "[명] 선물, 타고난 재능, 재능", "[명] 숙제", "[동] 웃다 / [명] 웃음", "[명] 신문", "[동] 전화하다, 전화를 걸다 / [명] 전화, 전화기", "[동] 읽다, 독서하다", "[형] 진짜의, 실제의, 현실의", "[부] 또한, 역시, 마찬가지로", "물론, 당연히", "[명] 로봇, 인조인간", "[형] 강한, 튼튼한, 힘이 센", "[동] 수영하다, 헤엄치다 / [명] 수영", "[명] 바이올린", "[부] 잘, 훌륭하게, 능숙하게 / [명] 우물", "[형] 추운, 찬, 냉담한 / [명] 추위, 냉기, 감기", "[명] 위험", "[형] 아름다운", "[명] 치과 의사", "[명] 교장 선생님"},
	{"[명] 수녀", "[명] 그림, 사진", "[동] 말을 타다, 타다, 타고가다 / [명] 탐, 태움", "[대] 무엇인가, 어떤 것, 어떤 일 / [명] 중요한 사람, 중요한 것, 어떤 것", "[명] 막대기, 지팡이 / [동] 찌르다, 붙이다", "[동] 멈추다, 멈추게하다, 그치다 / [명] 멈춤, 정류소", "[명] 얼룩말", "[동] 도착하다", "[부] 늘, 항상, 언제나", "걸어서, 도보로", "[전] ~사이에, 중간에", "[명] 덩어리, 블록, 구역 / [동] 막다, 방해하다", "[명] 책, 권, 장부 / [동] 기입하다, 예약하다", "[대] 무엇이든지, 모두 / [명] 가장 소중한 것, 가장 중요한 것", "[명] 병원", "[명] 섬", "[형] 왼쪽에, 좌", "[명] 공원 / [동] 주차하다", "~에 도착하다", "~옆에"},
	{"[형] 옳은, 바른, 오른쪽, 정당한 / [명] 권리, 인권", "[명] 남, 남쪽, 남방 / [형] 남쪽의, 남쪽에 있는", "[동] 머무르다, 체류하다, ~에 묵다 / [명] 머무름, 체류", "[형] 곧은, 일직선의, 똑바로 선 / [부] 똑바로, 일직선으로 / [명] 반듯함, 일직선", "[동] 돌다, 돌리다, 회전하다 / [명] 회전, 전환", "[형] 금의, 금빛의, 귀중한", "[형] 친절한 / [명] 종, 종류", "[명] 조각, 단편, 일부분, 파편", "[대] 무엇이든, 아무것도, 무언가 / [명] 무슨 일, 중요한사람, 중요한 것", "일종의, 이른바, ~와 같은", "[동] 달리다", "[부] 정말로, 실제로, 참으로", "[형] 두려워하여, 걱정하여, 무서워하여", "[형] 눈먼, 맹목적인, 장님의, 맹목적인", "[명] 어린 시절, 유년시절", "[동] 얻다, 벌다, 획득하다, 입수하다 / [명] 이득, 이익, 수익", "[형] 국제의, 국제적인", "[동] 의미하다, 의도하다 / [형] 비열한, 인색한, 심술궂은", "[명] 수단, 재산, 방법", "~할 준비가 되어있다"},
	{"[형] 슬픈, 애처로운", "[명] 시야, 시력, 구경거리, 풍경, 광경 / [동] 발견하다, 찾아내다", "[동] 냄새 맡다, 냄새가 나다 / [명] 냄새, 후각", "[동] 모으다, 모이다", "[명] 꿀, 벌꿀, 여보", "[명] 조종사, 파일럿, 안내인", "[형] 준비가 된, 준비된, 신속한, 즉석의", "[명] 텐트", "[명] 토대, 기초, 기지 / [동] ~에 기초를 두다", "[형] 비용이 많이 들지 않는, 싼, 저렴한", "[명] 단추", "[형] 쉬운, 용이한, 편한, 안락한", "[부] 결코~않다, 일찍이~없다", "[명] 문제", "[형] 둥근, 원형의 / [명] 둥근 것, 순환, 횐전 / [동] 돌다 / [부] ~내내 / [전] ~을 돌아", "[동] 보내다, 사람을 보내다", "[동] 빛나다, 반짝이다, 구두를 닦다, 광을 내다", "[형] 부드러운, 온화한", "[명] 소리, 음성 / [동] 소리가나다, ~하게 들리다 / [형] 건전한, 건강한", "A를 B에게 보내다"},
	{"[명] 웃음, 웃음소리", "[명] 독자, 독서가", "[형] 현실적인, 현실주의의, 사실적인", "[형] 위험한, 위태로운", "[명] 아름다움, 미, 훌륭한 것", "[형] 남쪽의", "[형] 밑의, 아래의, 하급의, 남부의 / [동] 낮추다, 내리다", "고수하다, 들러붙다, 집착하다", "잠깐 들르다, 방문하다", "~에 도착하다", "[명] 여행, 헛디딤 / [동] 걸려 넘어지다", "[명] 친절, 친절한 행위", "[명] 슬픔", "[명] 의미, 뜻, 의의, 중요성", "[명] 관광", "[부] 쉽게", "[동] 들어가다, 입학하다", "[명] 분 / [형] 미세한, 상세한", "밖에서 자다, 외박하다", "~에 관해 이야기를 나누다"},
	{"[형] 나쁜, 불량한, 해로운", "[명] 구름", "[형] 낮은, 천한 / [부] 낮게", "[명] 메뉴, 차림표, 식단표", "[전] ~에 반대하여, ~에 거슬러서", "[동] 동의하다, 승낙하다, 의견이 일치하다", "[명] 토론, 논쟁, 논의 / [동] 토론하다, 논쟁하다, 논의하다", "[동] 얻다, 사다, 구해주다", "[명] 장갑, 글러브", "소풍을 가다", "[명] 아들", "[동] 수집하다, 모으다", "[명] 잔치, 축제", "[명] 반, 절반, 2분의 1", "[동] 기도하다, 빌다, 기원하다", "[접] ~이므로, ~이기 때문에, ~이래로", "[부] 아직도, 여전히 / [형] 조용한, 고요한, 움직이지 않는", "[명] 스타일, 문제, 양식, 표현양식, 방식", "재미로, 장난으로", "서로서로"},
	{"[동] 다루다, 치료하다, 대접하다 / [명] 대우, 한턱내기", "[형] 서쪽의, 서양의", "[부] 주위에, 사방에, 빙 돌아서 / [전] ~주위에, ~을 둘러싸고", "[동] 의심하다, 수상히 여기다 / [명] 의심", "[형] 충분한, 필요한 만큼의 / [부] 충분히 / [대] 충분(한 수, 양)", "[형] 살찐, 지방이 많은 / [명] 지방", "[명] 불, 화제 / [동] 불을 지르다, 해고하다, 발사하다", "[형] 일반적인, 보편적인, 개괄적인 / [명] 장군", "[명] 값, 가격, 시세 / [동] 값을 매기다, 평가하다", "전 세계에 걸쳐, 전 세계, 전 세계에서", "[형] 좋아하는, 정다운, 다정한", "[명] 소금 / [동] 소금을 치다", "[동] 흔들리다, 흔들다, 떨다, 진동시키다", "[명] 모양, 형상, 건강상태, 형태 / [동] 모양을 형성하다, 구체화하다", "[동] 쓰다, 소비하다, 낭비하다", "[동] 노력하다, 시도하다 / [명] 노력, 시도", "[동] 빌려주다", "[명] 새장, 우리", "[명] 재료, 소재, 물질", "[명] 수의사"},
	{"[명] 내세, 사후", "[접] 왜냐하면, ~ 때문에", "[동] 파괴하다, 파멸시키다, 손상시키다, 망치다", "[동] 죽다, 사망하다", "[형] 무거운, 심한", "[명] 구멍, 틈", "[형] 거대한, 막대한", "[형] 내부에 있는, 내부의, 안쪽의 / [부] 내부에, 내면에, 안쪽에, 실내에서", "[명] 생명, 생활, 일생, 삶", "~로부터 내려오다", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""}
};

// Basic_Example_Word 단어 예문 배열

char Basic_Example_Word[10][20][10000] = {
	{"Water the plants.", "He got a part-time job.", "Anyway, thanks for helping me.", "He will depart Korea for China tomorrow.", "a news item", "This is my advice to you.", "She covered a child with a blanket.", "He knows how to fix it.", "I believe that there is no God.", "Are you in the fifth grade?", "They hit me on the head.", "I judge her (to be) honest.", "He kicked a football too high.", "Who took the first prize?", "He won the race.", "to stone her to death", "This blue vase is beautiful.", "Look at the stone wall.", "I have a nice car.", "It s very good."}
};

// Basic_Example_Meaning 단어 예문 뜻 배열

char Basic_Example_Meaning[10][20][10000] = {
	{"식물에 물을 주어라.", "그는 시간제 일자리를 얻었다.", "어쨌든, 저를 도와 줘서 고마워요.", "그는 내일 한국을 떠나 중국으로 출발할거야.", "신문 기사", "이것이 내가 네게 주는 충고이다.", "그녀는 담요로 아이를 덮었다.", "그는 그것을 고칠 줄 안다.", "나는 신이 없다고 믿어.", "당신이 5학년이에요?", "그들이 나의 머리를 때렸다.", "나는 그녀가 정직하다고 판단(생각)한다.", "그는 축구공을 높이 걷어찼다.", "누가 1등상을 받았나?", "그는 경주에서 승리했어요.", "돌을 던져 그녀를 죽이다.", "이 파란 꽃병은 아름답다.", "돌담을 봐라.", "나는 멋진 차를 가지고 있다.", "매우 좋아."}
};

// Basic_Proverb_Word 단어 속담 배열

char Basic_Proverb_Word[50][10000] = { "As the old cock crows, the young cock learns.", "A leopard cannot change its spots.", "A cat may look at the king.", "A drowning man grasp at a straw.", "A fool and his money soon part", "All is fish that comes to his net.", "A friend in need is a friend indeed.", "Actions speak louder than words.", "A wonder lasts but nine days.", "A burnt child dreads the fire.", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", };

// Basic_Proverb_Meaning 단어 속담 뜻 배열

char Basic_Proverb_Meaning[50][10000] = { "서당 개 3년이면 풍월을 읊는다.", "표범은 그의 반점을 변호시킬 수 없다.", "누구나 그에 상당하는 권리는 있다.", "물에 빠진 사람은 지푸라기라도 잡는다.", "바보는 쓸 데 없는 데 돈을 쓴다.", "자기 잇속은 차린다.", "곤경에 처했을 때 돕는 친구가 진정한 친구이다.", "말보다 행동이 우선", "남ㅇ의 말도 석 달; 곧 예사로 여겨지게 되는 일", "불에 덴 아이는 불을 무서워 한다.", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "" };


// ---------- Mid 배열 ----------


// Mid_Word 단어 배열  

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

// Mid_Meaning 단어 뜻 배열 

char Mid_Meaning[10][20][10000] = {
	{"[명] 탑", "[명] 노력, 수고", "[명] 결점, 과실, 잘못, 흠", "[명] 마룻바닥, 층, 바닥", "[명] 친절, 우수, 착함, 선량", "[형] 좋아하는, 만족스러워 하는", "[명] 일생, 평생 / [형] 일생동안의", "[형] 화난, 열광적인, 미친", "[동] 추측하다, 생각하다, 가정하다", "쉬다, 휴식을 취하다", "[명] 보물, 보배 / [동] 소중히 하다, 귀중하게 여기다", "[동] 행동하다, 연기하다 / [명] 행동, 연기", "[명] 사무원, 점원", "[명] 발", "[동] 지불하다, 돈을 치르다 / [명] 봉급", "[명] 씨앗, 씨, 종자", "[동] 외치다, 소리 지르다 / [명] 외침", "[동] 해결하다, 풀다, 정착하다, 거주하다", "[명] 환경, 주위상황, 자연환경", "적어도, 최소한"},
	{"[동] 느끼다", "[형] 집이 없는", "[명] 항아리, 단지", "[명] 조직, 구성, 단체", "[명] 동정, 연민의 정, 유감 / [동] 동정하다", "[동] 오염시키다, 더럽히다", "[동] 막다, 예방하다, 방지하다, 못하게 하다", "[동] 두다, 놓다", "~에 화나다", "시험 삼아 ~해보다", "[형] 규칙적인, 정기적인, 보통의", "[명] 쓰레기", "[명] 쓰레기 통, 큰 상자", "[명] 솔 / [동] 솔질하다, 이를 닦다, 머리를 빗다", "[부] 그 대신에", "[명] 민족", "[명] 퍼센트, 백분율", "[동] 감소시키다, 줄이다, 낮추다, 축소하다", "시험을 잘보다", "~하기로 되어 있다, ~해야 한다"},
	{"[동] 다시사용하다, 재사용하다 / [명] 재사용, 재이용", "[동] 톡톡 두드리다, 가볍게 두드리다 / [명] 수도꼭지, 마개", "[형] 불쾌한, 싫은", "[동] 불다, 바람이 불다 / [명] 강타, 타격", "[동] 기부하다, 기증하다, 공헌하다, 기여하다", "[형] 미친, 열광적인, 화난, 이상한, 열광하는", "[형] 황량한, 쓸쓸한, 사람이 없는 / [동] 황폐시키다, 쓸쓸하게 하다", "[동] 전념하다, 바치다", "[명] 농장 / [동] 경작하다", "B라기 보다는 차라리 A이다", "[형] 비옥한, 땅이 기름진, 다산의", "[동] 채우다, 메우다, 가득 채우다", "[형] 믿을 수 없는, 놀라운, 매우 훌륭한", "[명] 신비, 불가사의, 비밀, 수수께끼, 미스테리", "[동] 공급하다, 제공하다, 부양하다", "[명] 지여ㄱ, 분야, 지방, 지대", "[형] 조용한, 고요한, 침묵하는", "[명] 골짜기, 계곡", "[전] ~까지, ~할 때까지", "주위를 둘러보다"},
	{"[명] 지도", "[명] 계획, 연구과제, 사업 / [동] 예상하다, 추정하다, 계획하다", "[명] 무지개", "[명] 좌석 / [동] 앉히다", "[명] 교통, 교통량", "[형] 놀랄만한, 놀라운, 훌륭한", "[명] 은행, 강둑", "[명] 존재, 생물", "[동] 발견하다", "샤워를 하다", "[명] 열, 더위 / [동] 뜨겁게 하다, 가열하다", "[동] 이끌다, 인도하다 / [명] 납(금속)", "[형] 그릇된, 틀린, 거짓의, 가짜의", "[형] 흔한, 보통의, 공통의", "[명] 도서관", "[명] 순간, 시기, 때", "[명] 폭풍, 폭풍우", "[명] 악단, 밴드, 띠", "[동] 환호하다, 응원하다, 격려하다 / [명] 환호, 응원, 격려", "제대로 수행하다, 제대로 해내다, 성공하다"},
	{"[명] 즐거움, 기쁨", "[명] 행동, 활동", "[명] 지불, 납입, 지불액", "[명] 오염, 공해", "[형] 재사용이 가능한", "[명] 농부", "[명] 침묵, 고요함", "[명] 놀라움, 신비로움 / [동] 궁금하다, 놀라다", "~을 유감으로 여기다", "~대신에", "[명] 일사병, 열사병", "[부] 일반적으로, 보통", "[형] 명량한, 유쾌한, 쾌활한, 기분좋은", "[명] 발견자", "[형] 평화로운", "[형] 폭풍의, 폭풍우의", "~을 바치다, 헌신하다", "말없이, 조용히", "~을 매우 좋아하다", "~로 가득 차 있다"},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""}
};

// Mid_Example_Word 단어 예문 배열

char Mid_Example_Word[10][20][10000] = {
	{"the control tower", "He makes an effort to improve the environment.", "It's my fault.", "the upper floor", "My goodness! You gained a lot of weight.", "I am very pleased to see you again.", "the lifetime employment", "Don't be mad at me!", "Suppose she would accept your offer.", "They took a good rest in the shade.", "Children are the treasure of our country.", "He acts as if he is a superman.", "a department store clerk", "He put his foot on a branch.", "How much did you pay for it?", "to sow the seed", "He shouted for help.", "He settled in Seuol after his father's death.", "My prime concern is to protect our environment", "He must be at least 40."}
};

// Mid_Example_Meaning 단어 예문 뜻 배열

char Mid_Example_Meaning[10][20][10000] = {
	{"관제 탑", "그는 환경을 개선하기 위해 노력합니다.", "내 잘못이야. ", "위층", "이런! 너 살 많이 쪘다.", "너를 다시 만나서 기쁘구나.", "평생 고용", "나한테 화내지 마!", "그녀가 너의 제안을 수락한다고 가정해보자.", "그들은 그늘에서 잘 쉬었다.", "어린이는 우리나라의 보배이다.", "그늘 마치 자기가 수퍼맨인 것처럼 행동한다.", "백화점 점원", "그는 나뭇가지에 발을 올려놓았다.", "얼마 지불했니?", "씨를 뿌리다", "그는 도와 달라고 외쳤다.", "그는 아버지 사망 후 서울에 정착했다.", "나의 첫 번째 관심은 우리의 환경을 보호하는 것이다.", "그는 적어도 40살은 될 거야."}
};

// Mid_Proverb_Word 단어 속담 배열

char Mid_Proverb_Word[50][10000] = { "Many drops make a shower.", "Two heads are better than one.", "Time files like an arrow.", "The pot calls the kettle black.", "Never judge by appearance!", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", };

// Mid_Proverb_Meaning 단어 속담 뜻 배열

char Mid_Proverb_Meaning[50][10000] = { "작은 물방울이 소나기를 이룬다.", "두 사람의 머리가 한 사람의 머리보다 낫다.", "시간은 화살과 빨리 지나간다.", "냄비가 주전자보고 까맣다고 한다.", "절대 겉모습으로 판단하지 마라!", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", };


// ---------- High 배열 ----------


// High_Word 단어 배열  

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

// High_Meaning 단어 뜻 배열 

char High_Meaning[10][20][10000] = {
	{"[명] 미망인, 과부", "[명] 규칙, 규정, 통치 / [동] 다스리다, 지배하다, 통치하다", "[동] 닦다, 닦아내다", "[형] 자신 있는, 자신만만한, 확신 있는", "[동] 이루다, 성취하다, 달성하다, 획득하다", "[명] 행운, 운", "[명] 공격 / [동] 공격하다", "[명] 맛, 취미, 기호, 취향 / [동] 맛보다, 맛이 나다", "[명] 건강", "다루다, 대처하다", "[명] 적, 적군, 경쟁상대", "[명] 주먹", "[명] 명예, 영광, 경의 / [동] 존경하다, 명예를 주다", "[형] 정신의, 마음의", "[명] 구슬의", "[명] 지네", "[동] 증진하다, 장려하다, 승진시키다", "[명] 무기, 병기", "[명] 화살", "~를 학수고대하다"},
	{"[명] 무술", "[동] 치료하다, 치유하다 / [명] 치료, 치료제, 치료법", "[명] 병, 질병", "[동] 공연하다, 수행하다, 연주하다", "[명] 풍습, 관습, 세관, 관세", "[동] 지우다", "[명] 거인 / [형] 거대한", "[형] 자유로운, 무료의", "[명] 풀, 식용식물, 허브", "[명] 법, 법률", "[부] 곧, 즉시", "[명] 나무꾼, 벌목하는 사람", "[명] 순례자", " [동] 제안하다, 제공하다 / [명] 제안, 제공", "[명] 상인 / [형] 상업의", "[명] 솔, 소나무", "[명] 기록 / [동] 기록하다, 녹음하다", "[형] 몇몇의, 여럿의 / [대] 몇몇, 몇 개", "[명] 보상, 보상금 / [동] 보상하다, 상을 주다, 보답하다", "도대체"},
	{"[명] 허가증, 허가 / [동] 허락하다, 허용하다, 허가하다", "[명] 래천, 개울, 흐름 / [동] 흐르다", "[명] 일치, 조화, 화합", "[명] 나무줄기, 여행용 큰 가방", "[명] 전공, (군인)소령 / [형] 주요한, 대부분의, 중요한, 대다수의 / [동] 전공하다", "[동] 경작하다, 재배하다", "[동] 반대하다, 대립하다, 저항하다", "[동] 내려가다, 전해지다, ~의 자손이다", "[명] 관계", "[명] 가장자리, 칼날", "[명] 장례식 / [형] 장례의", "[명] 포유동물, 포유류", "[명] 약속, 가망 / [동] 약속하다", "[명] 표면, 외관, 겉 / [형] 표면의, 외관의", "[동] 허락하다, 허용하다", "[명] 기사, 조항, 품목", "[명] 세대", "[부] 거의, 하마터면", "[명] 상황, 사정, 사태", "해를 끼치다"},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""},
	{"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""}
};

// High_Example_Word 단어 예문 배열

char High_Example_Word[10][20][10000] = {
	{"She look care of a poor widow with four children in the neighborhood.", "In March 1919, Koreans declared independence from Japanese colonial rule.", "She wiped the tears from his eyes.", "I'm confident that I will get the job.", "Some people try hard to achieve a high position.", "a bird that represents good luck", "The best way to defend is attack.", "The food tastes awful.", "These days acid rain threatens our health.", "This book deals with global warming.", "The bird spread its wings to frighten its enemy.", "The martial art uses hands and fist to keep their attackers from attacking.", "He wins honor and glory.", "Vincent Van Gogh suffered from a mental illness.", "She wears a necklace of wooden beads", "Centipede is a small creature like an insect which has a long thin body and many legs.", "Wealth distribution could promote economic growth.", "This document contains details of weapon projects.", "This archers shot lots of fire arrows into the air.", "I look forward to hearing from you."}
};

// High_Example_Meaning 단어 예문 뜻 배열

char High_Example_Meaning[10][20][10000] = {
	{"그녀는 이웃에 네아이가 있는 가난한 미망인을 돌보았다.", "1919년 3월, 한국 사람들은 일본의 식민통치로부터 독립을 선포했다.", "그녀는 그의 눈에서 눈물을 닦아 주었다.", "내가 그 일을 얻을 것이 확실해.", "사람들은 높은 지위를 성취 하기위해 많은 노력을 한다.", "행운을 의미하는 새", "방어하는 최선의 방법은 공격하는 것이다.", "음식 맛이 끔찍한 맛이 나.", "요즘 산성비가 우리의 건강을 위협합니다.", "이 책은 지구 온난화에 대해 다루고 있다.", "그 새는 천적을 겁주기 위해 날개를 폈다.", "그 무술은 공격자가 공격을 못하도록 손과 주먹을 사용한다.", "그는 명예와 영광을 얻었다.", "빈센트 반 고흐는 정신적 질환을 앓았다.", "그녀는 나무로 된 구슬 목걸이(염주)를 하고 있다.", "지네는 길고 가는 몸통과 많은 다리를 가진 곤충 같은 작은 생물체이다.", "부의 재분배는 경제성장을 촉진 할 수 있다.", "이 문서에는 무기 사업에 관한 세부사항이 포함되어있다.", "궁수들이 수많은 불화살을 공중으로 쏘아 올렸다.", "너로부터 소식을 학수고대한다.(엄청 기다린다)"}
};

// High_Proverb_Word 단어 속담 배열

char High_Proverb_Word[50][10000] = { "Near heighbor is better than a distant cousin.", "Old habits die hard.", "Penny-wise and pound-foolish.", "Roses have thorns.", "Sow the wind and reap the whirlwind.", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", };

// High_Proverb_Meaning 단어 속담 뜻 배열

char High_Proverb_Meaning[50][10000] = { "이웃사촌", "오랜 습관은 버리기 어렵다.", "잔돈에는 현명하고, 큰돈에는 어리석다.", "장미에는 가시가 있다.", "되로 주고 말로 받는다.", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", };


// MODE 3 ( FINAL REVIEW MODE ) 단어 중복 방지 배열 * 10

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

// MODE 3 ( FINAL REVIEW MODE ) 단어 중복 방지 배열을 가르키는 포인터

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

	// ... 차차 여러 게임도 추가할 예정...

	// 단어장 종류 입력 받는 문자 정의 ( Basic, Mid, High )

	char BMH;

	// 단어장 MODE 입력 받는 숫자 정의

	int MODE;

	// 앞으로 쓰일 모든 Word 배열 ( Basic or Mid or High_Word 배열 )  

	char(*Array_Word)[20][100];

	// 앞으로 쓰일 모든 Meaning 배열 ( Basic or Mid or High_Meaning 배열 )  

	char(*Array_Meaning)[20][10000];

	// 앞으로 쓰일 모든 Example_Word 배열 ( Basic or Mid or High_Example_Word 배열 )  

	char(*Array_Example_Word)[20][10000];

	// 앞으로 쓰일 모든 Example_Meaning 배열 ( Basic or Mid or High_Example_Meaning 배열 )  

	char(*Array_Example_Meaning)[20][10000];

	// 앞으로 쓰일 모든 Proverb_Word 배열 ( Basic or Mid or High_Proverb_Word 배열 )  

	char(*Array_Proverb_Word)[10000];

	// 앞으로 쓰일 모든 Proverb_Meaning 배열 ( Basic or Mid or High_Proverb_Meaning 배열 )  

	char(*Array_Proverb_Meaning)[10000];

	// DAY 1 ~ 50 중 입력받는 숫자 정의

	int DAY;

	// MODE 1 ( LOOK MODE ) 의 PAGE

	int Look_Page = 0;

	// MODE 1 ( LOOK MODE ) 의 PAGE 초과, 미만 처리 ( -1 이거나 20 이면 Again )

	int LimitAgain = 0;

	// MODE 1 ( LOOK MODE ) 의 Arrow  ( ←, → )

	char Arrow;

	// 난이도 ( LEVEL )

	int LEVEL;

	// MODE 2 ( REVIEW MODE ) 의 랜덤 수 3개 ( Normal, Hard - Random )

	int Review_NH_Random_1, Review_NH_Random_2, Review_NH_Random_3;

	// MODE 2 ( REVIEW MODE ) 의 정답 확인 ( Normal, Hard - Answer )

	int Review_NH_Answer;

	// MODE 2 ( REVIEW MODE ) 의 정답, 오답 점수 확인 ( O, X )

	int Review_O = 0, Review_X = 0;

	// MODE 2 ( REVIEW MODE ) 의 랜덤 수 ( Hell - Random )

	int Review_H_Random_1;

	// MODE 2 ( REVIEW MODE ) 의 단어 갯수 확인 ( Hell - Word )

	int Review_Word = 1;

	// MODE 2 ( REVIEW MODE ) 의 정답 확인 ( Hell - Answer )

	char Review_H_Answer[100];

	// MODE 2 ( REVIEW MODE ) 단어 중복 방지 배열

	int Check_Overlap[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };



	// MODE 3 ( FINAL REVIEW MODE ) 의 랜덤 수 2개 ( Normal, Hard - Random )

	int Final_Review_NH_Random_1, Final_Review_NH_Random_2, Final_Review_NH_Random_3, Final_Review_NH_Random_4, Final_Review_NH_Random_5;

	// MODE 3 ( FINAL REVIEW MODE ) 의 정답 확인 ( Normal, Hard - Answer )

	int Final_Review_NH_Answer;

	// MODE 3 ( FINAL REVIEW MODE ) 의 단어 갯수 확인 ( Hell - Random )

	int Final_Review_Word = 1;

	// MODE 3 ( FINAL REVIEW MODE ) 의 랜덤 수 2개 ( Hell - Random )

	int Final_Review_H_Random_1, Final_Review_H_Random_2;

	// MODE 3 ( FINAL REVIEW MODE ) 의 정답 확인 ( Hell - Answer )

	char Final_Review_H_Answer[100];

	// MODE 3 ( FINAL REVIEW MODE ) 의 정답, 오답 점수 확인 ( O, X )

	int Final_Review_O = 0, Final_Review_X = 0;

	// MODE 4 ( HANG MAN GAME MODE ) 의 랜덤 수 2개

	int HangMan_Random_1, HangMan_Random_2;

	// MODE 4 ( HANG MAN GAME MODE ) 의 목숨 10 개

	int HangMan_Heart = 10;

	// MODE 4 ( HANG MAN GAME MODE ) 의 문제 ( 처음에는 1 )

	int HangMan_Question = 1;

	// MODE 4 ( HANG MAN GAME MODE ) 의 정답, 오답 확인

	int HangMan_O = 0, HangMan_X = 0;

	// MODE 4 ( HANG MAN GAME MODE ) 의 다음 문제 확인

	// 0 : 다음 문제, 1 : 지금 문제 그대로 

	int HangMan_Next_Question = 1;

	// MODE 4 ( HANG MAN GAME MODE ) 의 랜덤으로 받은 배열의 값을 저장한 문자열 배열

	char HangMan_Temp_Char[30];

	// MODE 4 ( HANG MAN GAME MODE ) 의 임시배열 ( HangMan_Temp_Char ) 의 길이를 저장하는 변수

	int HangMan_Length;

	// MODE 4 ( HANG MAN GAME MODE ) 의 길이에 맞게 _ 를 저장하는 임시 배열

	char HangMan_Temp_Array[30];

	// MODE 4 ( HANG MAN GAME MODE ) 의 알파벳 입력값을 가지는 문자를 현재까지 입력한 알파벳에 추가할 때 증가되는 임시 변수

	int HangMan_Temp_Int = 0;

	// MODE 4 ( HANG MAN GAME MODE ) 의 현재까지 입력한 알파벳을 저장하는 배열

	char HangMan_History_Array[30] = "";

	// MODE 4 ( HANG MAN GAME MODE ) 의 알파벳 입력값을 저장하는 문자 변수ㅊ

	char HangMan_Answer;

	// MODE 4 ( HANG MAN GAME MODE ) 의 정답과 입력한 알파벳 비교할때 증가 카운트 변수

	int HangMan_Count = 0;

	// MODE 4 ( HANG MAN GAME MODE ) 의 한 알파벳이라도 정답과 같은지를 알기위한 변수

	int HangMan_Switch = 0;

	// 배경 음악 재생 ( 단어장 실행 하면서 음악도 실행, 계속 반복 ) 

	// sndPlaySoundA("mymusic.wav", SND_ASYNC | SND_LOOP);

	// STEP 0-1

	// CONSOLE 창 크기, 제목 조정 ( 함수 이용 )

	console_window();

	// STEP 0-2

	// CONSOLE 창 글자 + 배경 색 바꾸기 ( 함수 이용 )

	// 4 = 빨강색

	// 15 = 진한 흰색

	console_color_change(4, 15);

	// STEP 1

	// EASY ENGLISH 단어장에 온 것을 환영하는 문구 출력

	printf("==================================================================================================================================\n");
	printf("========================================== EASY ENGLISH 단어장에 오신 것을 환영합니다. ===========================================\n");
	printf("==================================================================================================================================\n\n\n");

	// STEP 1-2

	// CONSOLE 창 글자 + 배경 색 바꾸기 ( 함수 이용 )

	// 0 = 검정색

	// 15 = 진한 흰색

	console_color_change(0, 15);

	// STEP 2-1

	// EASY ENGLISH 단어장 종류 선택 ( 함수 이용 )

	choice_BMH(&BMH); // BMH 의 주소를 전달 

	// STEP 2-2

	// BMH 의 결과에 따라 임시 배열 값 변경

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

		// BMH 가 B, M, H 가 아닐 경우 오류 표시하고 프로그램 종료 

		printf("\n\n 오류 입니다 ... \n\n");

		exit(0);

	}

	// 임시 배열 출력 확인 ( 방법 1 )

	/*printf("\n%s\n", Array_Word[0][0]);

	printf("\n%s\n", Array_Meaning[0][0]);

	printf("\n%s\n", Array_Example_Word[0][0]);

	printf("\n%s\n", Array_Example_Meaning[0][0]);

	printf("\n%s\n", Array_Proverb_Word[0]);

	printf("\n%s\n", Array_Proverb_Meaning[0]);*/

	// 임시 배열 출력 확인 ( 방법 2 )

	/*printf("\n%s\n", *(*(Array_Word + 0) + 0));

	printf("\n%s\n", *(*(Array_Meaning + 0) + 0));

	printf("\n%s\n", *(*(Array_Example_Word + 0) + 0));

	printf("\n%s\n", *(*(Array_Example_Meaning + 0) + 0));

	printf("\n%s\n", *(Array_Proverb_Word + 0));

	printf("\n%s\n", *(Array_Proverb_Meaning + 0));*/

	// 콘솔 화면 출력된 모든결과 지우기

	//system("cls");

	// STEP 3

	// EASY ENGLISH 단어장 MODE 선택 ( 함수 이용 )

	choice_mode(&MODE);


	// STEP 4

	// 선택한 모드로 이동

	// STEP 4-1

	// MODE 가 1 일때 ( LOOK MODE )

	if (MODE == 1) {

		// LOOK MODE ( 1 ~ 50 DAY 중 입력한 DAY 의 단어와 뜻, 속담을 보여주는 모드 )

		// 1 ~ 50 DAY 선택 ( 함수 이용 )

		choice_day(&DAY, MODE);

		// LOOK MODE 설명서

		printf("==================================================================================================================================\n");
		printf("============= < LOOK MODE > 다음 단어 보기 = 오른쪽 화살표 ( → ), 이전 단어 보기 = 왼쪽 화살표 ( ← ), 종료 = Enter =============\n");
		printf("==================================================================================================================================\n\n\n");

		// 선택한 DAY 의 Word, Meaning, Example_Word, Example_Meaning, Proverb_Word, Proverb_Meaning 출력

		// 처음 보여줄 부분

		printf("   < DAY %d - %d > \n\n\n", DAY, Look_Page + 1);

		printf("   - %s : ", Array_Word[DAY - 1][Look_Page]);

		printf("%s\n\n\n", Array_Meaning[DAY - 1][Look_Page]);

		printf("   EX) : %s ", Array_Example_Word[DAY - 1][Look_Page]);

		printf("   뜻 : %s\n\n\n", Array_Example_Meaning[DAY - 1][Look_Page]);

		// 엔터 ( Enter ) 를 칠때까지 계속 반복

		while (1) {

			if (_kbhit()) {               // 1. while문안에서 키보드 눌렸을 시 if문이 실행된다.

				Arrow = _getch();           // 2. 방향키가 입력됬을 때 224 00 이 버퍼에 있다. 224부터 빼준다. 

				if (Arrow == -32) {           // 3. -32로 입력되면

					Arrow = _getch();        // 4. 뒤의 값 00을 판별하여 좌우상하 출력

					switch (Arrow) {

					case LEFT: // 왼쪽 화살표 ( ← ) 를 눌렀을 때

						if (LimitAgain == 0) { // 왼쪽 화살표를 눌렀을 때 Look_Page 가 0 ~ 19 일 때

							--Look_Page; // 왼쪽 화살표대로 1을 뺀다. ( - )

						}
						else { // 왼쪽 화살표를 눌렀을 때 Look_Page 가 0 ~ 19 아닐 때 ( 즉 -1 일때 )

							Look_Page = 19; // 가장 높은 Look_Page 로 바꿈

						}

						// case LEFT 종료

						break;

					case RIGHT: // 오른쪽 화살표 ( → ) 를 눌렀을 때

						if (LimitAgain == 0) { // 오른쪽 화살표를 눌렀을 때 Look_Page 가 0 ~ 19 일 때

							++Look_Page; // 오른쪽 화살표대로 1을 더한다. ( + )

						}
						else { // 오른쪽 화살표를 눌렀을 때 Look_Page 가 0 ~ 19 아닐 때 ( 즉 20 일때 )

							Look_Page = 0; // 가장 낮은 Look_Page 로 바꿈

						}

						// case LEFT 종료

						break;

					}

					// Look_Page 가 -1 이거나 20 이라면

					if (Look_Page <= -1 || Look_Page >= 20) {

						// 콘솔 화면 출력된 모든결과 지우기

						system("cls");

						// LOOK MODE 설명서

						printf("==================================================================================================================================\n");
						printf("============= < LOOK MODE > 다음 단어 보기 = 오른쪽 화살표 ( → ), 이전 단어 보기 = 왼쪽 화살표 ( ← ), 종료 = Enter =============\n");
						printf("==================================================================================================================================\n\n\n");

						// 속담 출력 ( Proverb )

						printf("   < DAY %d - 중요 속담 ! > \n\n\n", DAY);

						printf("   - %s : ", Array_Proverb_Word[DAY - 1]);

						printf("%s\n\n\n", Array_Proverb_Meaning[DAY - 1]);

						// 미만 or 초과 

						LimitAgain = 1;

						// Look_Page 가 -1 이거나 20 이 아니라면

					}
					else {

						// 콘솔 화면 출력된 모든결과 지우기

						system("cls");

						// LOOK MODE 설명서

						printf("==================================================================================================================================\n");
						printf("============= < LOOK MODE > 다음 단어 보기 = 오른쪽 화살표 ( → ), 이전 단어 보기 = 왼쪽 화살표 ( ← ), 종료 = Enter =============\n");
						printf("==================================================================================================================================\n\n\n");

						// 선택한 DAY 의 Word, Meaning, Example_Word, Example_Meaning, Proverb_Word, Proverb_Meaning 출력

						printf("   < DAY %d - %d > \n\n\n", DAY, Look_Page + 1);

						printf("   - %s : ", Array_Word[DAY - 1][Look_Page]);

						printf("%s\n\n\n", Array_Meaning[DAY - 1][Look_Page]);

						printf("   EX) : %s ", Array_Example_Word[DAY - 1][Look_Page]);

						printf("   뜻 : %s\n\n\n", Array_Example_Meaning[DAY - 1][Look_Page]);

						// 미만 or 초과가 아님으로 초기화

						LimitAgain = 0;

					}

				}
				else if (Arrow == 13) { // 아스키 코드 13은 Enter 이다.

			   // while 문 종료 

					break;

				}
			}
		}

		// STEP 4-2

		// MODE 가 2 일때 ( REVIEW MODE )

	}
	else if (MODE == 2) {

		// REVIEW MODE ( 1 ~ 50 DAY 중 입력한 DAY 의 단어와 뜻을 테스트하는 모드 )

		// 1 ~ 50 DAY 선택 ( 함수 이용 )

		choice_day(&DAY, MODE);

		// 난이도 선택 ( Normal, Hard, Hell ) ( 함수 이용 )

		// 1. Normal - 한글 뜻 문제를 주고 영어 단어 4개 중 1개 택

		// 2. Hard - 영어 단어 문제를 주고 한글 뜻 4개 중 1개 택

		// 3. Hell - 한글 뜻 문제를 주고 영어 단어를 직접 입력

		choice_level(&LEVEL);

		// REVIEW MODE DAY 표시

		printf("==================================================================================================================================\n");
		printf("================================================== < REVIEW MODE > DAY %d REVIEW =================================================\n", DAY);
		printf("==================================================================================================================================\n\n\n");

		// 랜덤 함수 정의

		srand((unsigned)time(NULL));

		// 만약 난이도가 Normal 이거나 Hard 면

		if (LEVEL == 1 || LEVEL == 2) {

			// 20 개의 단어 문제 출력 ( 0 ~ 20 )

			for (int i = 0; i < 20; i++) {

				// 정답이 놓일 번호 ( 0 ~ 3 )

				Review_NH_Random_1 = rand() % 4;

				// LEVEL 이 1이면 뜻 문제를, LEVEL 이 2이면 단어 문제를 출력 

				if (LEVEL == 1) {

					printf("   %d. %s \n\n\n", i + 1, Array_Meaning[DAY - 1][i]);

				}
				else {

					printf("   %d. %s \n\n\n", i + 1, Array_Word[DAY - 1][i]);

				}

				// 문제에 대한 보기 출력 ( 4개 )

				for (int j = 0; j < 4; j++) {

					while (1) {

						// 랜덤으로 20개의 단어 중 1개 선택 ( 0 ~ 19 ) 

						Review_NH_Random_2 = rand() % 20;

						// 랜덤으로 10 DAY 중 1개의 DAY 선택 ( 0 ~ 9 )

						Review_NH_Random_3 = rand() % 10;

						// 만약 랜덤으로 뽑은 두 개의 수가 문제의 배열과 같지 않다면 종료

						// 같다면 같지 않을 때까지 반복

						if (Review_NH_Random_2 != i && Review_NH_Random_3 != (DAY - 1)) {

							// while 문 탈출

							break;

						}

					}

					// 만약 j 가 Look_Random 이라면 ==> 정답인 보기

					if (Review_NH_Random_1 == j) {

						// LEVEL 이 1이면 뜻이 정답인 보기를, LEVEL 이 2이면 ( 1이 아니면 ) 단어가 정답인 보기를 출력

						if (LEVEL == 1) {

							printf("   Q%d. %s\n\n", j + 1, Array_Word[DAY - 1][i]);

						}
						else {

							printf("   Q%d. %s\n\n", j + 1, Array_Meaning[DAY - 1][i]);

						}

						// 만약 j 가 Look_Random 아니라면 ==> 오답인 보기

					}
					else {

						// LEVEL 이 1이면 뜻이 오답인 보기를, LEVEL 이 2이면 ( 1이 아니면 ) 단어가 오답인 보기를 출력

						if (LEVEL == 1) {

							printf("   Q%d. %s\n\n", j + 1, Array_Word[Review_NH_Random_3][Review_NH_Random_2]);

						}
						else {

							printf("   Q%d. %s\n\n", j + 1, Array_Meaning[Review_NH_Random_3][Review_NH_Random_2]);

						}

					}

				}

				// 줄바꿈 * 3

				printf("\n\n\n");

				// 정답 입력받기

				printf("   정답은: ");
				scanf("%d", &Review_NH_Answer);

				// 콘솔 화면 출력된 모든결과 지우기

				system("cls");

				// 만약 입력한 값이 정답이라면 

				if ((Review_NH_Answer - 1) == Review_NH_Random_1) {

					// 정답 축하 멘트 출력

					// 글자색은 빨강색, 배경색은 진한 하얀색으로 변경

					console_color_change(4, 15);

					printf("\n\n   정답입니다 !!\n\n\n");

					// 글자색은 검정색, 배경색은 진한 하얀색으로 변경

					console_color_change(0, 15);

					// 정답 맞춘 횟수 ( 포인트 ) 증가

					++Review_O;

				}
				else {

					// 오답 멘트 출력

					printf("\n\n   오답입니다 !!\n\n\n");

					// 정답이 몇번인지 확인

					// 글자색은 빨강색, 배경색은 진한 하얀색으로 변경

					console_color_change(4, 15);

					// LEVEL 이 1이면 뜻이 정답인 보기를, LEVEL 이 2이면 ( 1이 아니면 ) 단어가 정답인 보기를 출력

					if (LEVEL == 1) {

						printf("   정답은 %s 입니다.\n\n\n", Array_Word[DAY - 1][i]);

					}
					else {

						printf("   정답은 %s 입니다.\n\n\n", Array_Meaning[DAY - 1][i]);

					}

					// 글자색은 검정색, 배경색은 진한 하얀색으로 변경

					console_color_change(0, 15);

					// 오답인 횟수 ( 포인트 ) 증가

					++Review_X;

				}

			}

			// 만약 난이도가 Normal 이거나 Hard 가 아니면 ( Hell 이면 )

		}
		else {

			// 뜻 문제를 20개 낼 때까지 계속 반복

			while (1) {

				// 단어가 20개 이상이면 while 문 탈출

				if (Review_Word >= 21) {

					break;

				}

				// DAY 와 단어 갯수 출력

				printf("   DAY %d - %d : ", DAY, Review_Word);

				// 랜덤으로 20개의 단어 중 1개 선택 ( 0 ~ 19 ) 

				Review_H_Random_1 = rand() % 20;

				// 20 번 반복 ( 0 ~ 19 )

				for (int n = 0; n < 20; n++) {

					// 뽑은 랜덤 수가 중복인지 아닌지 확인

					if (Review_H_Random_1 == Check_Overlap[n]) {

						// 뽑은 수가 중복이 아니면 100 을 대입

						// -> 다음에 중복이 되게 하기 위해서

						Check_Overlap[n] = 100;

						// for 문 종료

						break;

						// 뽑은 랜덤 수가 중복이라면

					}
					else if ((n == 19) && (Check_Overlap[Review_H_Random_1] == 100)) {

						// for 문을 다시 돌려야 함으로 n 초기화

						n = -1;

						// rand 함수로 다시 랜덤 수 뽑음

						Review_H_Random_1 = rand() % 20;

						// continue 로 다시 반복

						continue;

					}

				}

				// 중복 검사가 된 배열의 단어 출력

				printf("%s\n", Array_Meaning[DAY - 1][Review_H_Random_1]);

				// 줄바꿈 * 3

				printf("\n\n\n");

				// 정답 입력받기

				printf("   정답은: ");

				// %[^\n] = 공백 ( \n ) 을 제외한 모든 문자

				scanf(" %[^\n]", Review_H_Answer);

				// 콘솔 화면 출력된 모든결과 지우기

				system("cls");

				// 만약 입력한 답이 정답과 같으면 ( 정답이면 )

				if (strcmp(Review_H_Answer, Array_Word[DAY - 1][Review_H_Random_1]) == 0) {

					// 정답 축하 멘트 출력

					// 글자색은 빨강색, 배경색은 진한 하얀색으로 변경

					console_color_change(4, 15);

					printf("\n\n   정답입니다 !!\n\n\n");

					// 글자색은 검정색, 배경색은 진한 하얀색으로 변경

					console_color_change(0, 15);

					// 정답 맞춘 횟수 ( 포인트 ) 증가

					++Review_O;

					// 만약 입력한 답이 정답과 다르면 ( 오답이면 )

				}
				else {

					// 오답 멘트 출력

					printf("\n\n   오답입니다 !!\n\n\n");

					// 정답이 무엇인지 확인

					// 글자색은 빨강색, 배경색은 진한 하얀색으로 변경

					console_color_change(4, 15);

					printf("   정답은 %s 입니다.\n\n\n", Array_Word[DAY - 1][Review_H_Random_1]);

					// 글자색은 검정색, 배경색은 진한 하얀색으로 변경

					console_color_change(0, 15);

					++Review_X;
				}

				// 단어 수 증가 ( 다음 단어 )

				++Review_Word;
			}

		}

		// 콘솔 화면 출력된 모든결과 지우기

		system("cls");

		// 정답, 오답 갯수 출력

		printf("\n   맞춘 갯수는 %d 개 입니다. \n", Review_O);
		printf("   틀린 갯수는 %d 개 입니다. \n", Review_X);

	}
	else if (MODE == 3) {

		// FINAL REVIEW MODE ( 1 ~ 50 DAY 의 단어와 뜻을 테스트하는 모드 )

		// 난이도 선택 ( Normal, Hard, Hell ) ( 함수 이용 )

		// 1. Normal - 한글 뜻 문제를 주고 영어 단어 4개 중 1개 택

		// 2. Hard - 영어 단어 문제를 주고 한글 뜻 4개 중 1개 택

		// 3. Hell - 한글 뜻 문제를 주고 영어 단어를 직접 입력

		choice_level(&LEVEL);

		// FINAL REVIEW MODE DAY 표시

		printf("==================================================================================================================================\n");
		printf("====================================================== < FINAL REVIEW MODE > =====================================================\n");
		printf("==================================================================================================================================\n\n\n");

		// 랜덤 함수 정의

		srand((unsigned)time(NULL));

		// 만약 난이도가 Normal 이거나 Hard 면

		if (LEVEL == 1 || LEVEL == 2) {

			// 문제를 200 개 낼 때까지 계속 반복

			while (1) {

				// 단어가 200 개 이상이면 while 문 탈출

				if (Final_Review_Word >= 201) {

					break;

				}

				// 1 ~ 10 DAY 중 랜덤으로 1개 뽑음

				Final_Review_NH_Random_1 = rand() % 10;

				// 랜덤으로 20 개의 단어 중 1개 선택 ( 0 ~ 19 ) 

				Final_Review_NH_Random_2 = rand() % 20;

				// 20 번 반복 ( 0 ~ 19 )

				for (int n = 0; n < 20; n++) {

					// 1 ~ 10 중 1개의 결과에 따라 DAY 변경 ( 함수 이용 )

					Change_Check_Overlaps_Pointer(Final_Review_NH_Random_1);

					// 뽑은 랜덤 수가 중복인지 아닌지 확인

					if (Final_Review_NH_Random_2 == Check_Overlaps_Pointer[n]) {

						// 뽑은 수가 중복이 아니면 100 을 대입

						// -> 다음에 중복이 되게 하기 위해서

						Check_Overlaps_Pointer[n] = 100;

						// for 문 종료

						break;

						// 뽑은 랜덤 수가 중복이라면

					}
					else if ((n == 19) && (Check_Overlaps_Pointer[Final_Review_NH_Random_2] == 100)) {

						// for 문을 다시 돌려야 함으로 n 초기화

						n = -1;

						// rand 함수로 다시 랜덤 수 뽑음

						Final_Review_NH_Random_1 = rand() % 10;

						Final_Review_NH_Random_2 = rand() % 20;

						// continue 로 다시 반복

						continue;

					}

				}

				// 정답이 놓일 번호 ( 0 ~ 3 )

				Final_Review_NH_Random_3 = rand() % 4;

				// LEVEL 이 1이면 뜻 문제를, LEVEL 이 2이면 단어 문제를 출력 

				if (LEVEL == 1) {

					printf("   %d. %s \n\n\n", Final_Review_Word, Array_Meaning[Final_Review_NH_Random_1][Final_Review_NH_Random_2]);

				}
				else {

					printf("   %d. %s \n\n\n", Final_Review_Word, Array_Word[Final_Review_NH_Random_1][Final_Review_NH_Random_2]);

				}

				// 문제에 대한 보기 출력 ( 4개 )

				for (int j = 0; j < 4; j++) {

					while (1) {

						// 랜덤으로 20개의 단어 중 1개 선택 ( 0 ~ 19 ) 

						Final_Review_NH_Random_4 = rand() % 20;

						// 랜덤으로 10 DAY 중 1개의 DAY 선택 ( 0 ~ 9 )

						Final_Review_NH_Random_5 = rand() % 10;

						// 오답인 보기와 정답인 보기가 일치하지 않을 때까지 반복

						if (Final_Review_NH_Random_2 != Final_Review_NH_Random_4 && Final_Review_NH_Random_1 != Final_Review_NH_Random_5) {

							// while 문 탈출

							break;

						}

					}

					// 만약 j 가 Look_Random 이라면 ==> 정답인 보기

					if (Final_Review_NH_Random_3 == j) {

						// LEVEL 이 1이면 뜻이 정답인 보기를, LEVEL 이 2이면 ( 1이 아니면 ) 단어가 정답인 보기를 출력

						if (LEVEL == 1) {

							printf("   Q%d. %s\n\n", j + 1, Array_Word[Final_Review_NH_Random_1][Final_Review_NH_Random_2]);

						}
						else {

							printf("   Q%d. %s\n\n", j + 1, Array_Meaning[Final_Review_NH_Random_1][Final_Review_NH_Random_2]);

						}

						// 만약 j 가 Look_Random 아니라면 ==> 오답인 보기

					}
					else {

						// LEVEL 이 1이면 뜻이 오답인 보기를, LEVEL 이 2이면 ( 1이 아니면 ) 단어가 오답인 보기를 출력

						if (LEVEL == 1) {

							printf("   Q%d. %s\n\n", j + 1, Array_Word[Final_Review_NH_Random_5][Final_Review_NH_Random_4]);

						}
						else {

							printf("   Q%d. %s\n\n", j + 1, Array_Meaning[Final_Review_NH_Random_5][Final_Review_NH_Random_4]);

						}

					}

				}

				// 줄바꿈 * 3

				printf("\n\n\n");

				// 정답 입력받기

				printf("   정답은: ");
				scanf("%d", &Final_Review_NH_Answer);

				// 콘솔 화면 출력된 모든결과 지우기

				system("cls");

				// 만약 입력한 값이 정답이라면 

				if ((Final_Review_NH_Answer - 1) == Final_Review_NH_Random_3) {

					// 정답 축하 멘트 출력

					// 글자색은 빨강색, 배경색은 진한 하얀색으로 변경

					console_color_change(4, 15);

					printf("\n\n   정답입니다 !!\n\n\n");

					// 글자색은 검정색, 배경색은 진한 하얀색으로 변경

					console_color_change(0, 15);

					// 정답 맞춘 횟수 ( 포인트 ) 증가

					++Final_Review_O;

				}
				else {

					// 오답 멘트 출력

					printf("\n\n   오답입니다 !!\n\n\n");

					// 정답이 몇번인지 확인

					// 글자색은 빨강색, 배경색은 진한 하얀색으로 변경

					console_color_change(4, 15);

					// LEVEL 이 1이면 뜻이 정답인 보기를, LEVEL 이 2이면 ( 1이 아니면 ) 단어가 정답인 보기를 출력

					if (LEVEL == 1) {

						printf("   정답은 %s 입니다.\n\n\n", Array_Word[Final_Review_NH_Random_1][Final_Review_NH_Random_2]);

					}
					else {

						printf("   정답은 %s 입니다.\n\n\n", Array_Meaning[Final_Review_NH_Random_1][Final_Review_NH_Random_2]);

					}

					// 글자색은 검정색, 배경색은 진한 하얀색으로 변경

					console_color_change(0, 15);

					// 오답인 횟수 ( 포인트 ) 증가

					++Final_Review_X;

				}

				// 단어 수 증가 ( 다음 단어 )

				++Final_Review_Word;

			}

			// 만약 난이도가 Normal 이거나 Hard 가 아니면 ( Hell 이면 )

		}
		else {

			// 뜻 문제를 200 개 낼 때까지 계속 반복

			while (1) {

				// 단어가 200 개 이상이면 while 문 탈출

				if (Final_Review_Word >= 201) {

					break;

				}

				// 1 ~ 10 DAY 중 랜덤으로 1개 뽑음

				Final_Review_H_Random_1 = rand() % 10;

				// 랜덤으로 20 개의 단어 중 1개 선택 ( 0 ~ 19 ) 

				Final_Review_H_Random_2 = rand() % 20;

				// 20 번 반복 ( 0 ~ 19 )

				for (int n = 0; n < 20; n++) {

					// 1 ~ 10 중 1개의 결과에 따라 DAY 변경 ( 함수 이용 )

					Change_Check_Overlaps_Pointer(Final_Review_H_Random_1);

					// 뽑은 랜덤 수가 중복인지 아닌지 확인

					if (Final_Review_H_Random_2 == Check_Overlaps_Pointer[n]) {

						// 뽑은 수가 중복이 아니면 100 을 대입

						// -> 다음에 중복이 되게 하기 위해서

						Check_Overlaps_Pointer[n] = 100;

						// for 문 종료

						break;

						// 뽑은 랜덤 수가 중복이라면

					}
					else if ((n == 19) && (Check_Overlaps_Pointer[Final_Review_H_Random_2] == 100)) {

						// for 문을 다시 돌려야 함으로 n 초기화

						n = -1;

						// rand 함수로 다시 랜덤 수 뽑음

						Final_Review_H_Random_1 = rand() % 10;

						Final_Review_H_Random_2 = rand() % 20;

						// continue 로 다시 반복

						continue;

					}

				}

				// 몇 번째 단어인지, 그 단어의 뜻, 그 단어의 DAY 출력

				printf("   Q.%d : %s ( DAY %d )\n", Final_Review_Word, Array_Meaning[Final_Review_H_Random_1][Final_Review_H_Random_2], Final_Review_H_Random_1 + 1);

				// 줄바꿈 * 3

				printf("\n\n\n");

				// 정답 입력받기

				printf("   정답은: ");

				// %[^\n] = 공백 ( \n ) 을 제외한 모든 문자

				scanf(" %[^\n]", Final_Review_H_Answer);

				// 콘솔 화면 출력된 모든결과 지우기

				system("cls");

				// 만약 입력한 답이 정답과 같으면 ( 정답이면 )

				if (strcmp(Final_Review_H_Answer, Array_Word[Final_Review_H_Random_1][Final_Review_H_Random_2]) == 0) {

					// 정답 축하 멘트 출력

					// 글자색은 빨강색, 배경색은 진한 하얀색으로 변경

					console_color_change(4, 15);

					printf("\n\n   정답입니다 !!\n\n\n");

					// 글자색은 검정색, 배경색은 진한 하얀색으로 변경

					console_color_change(0, 15);

					// 정답 맞춘 횟수 ( 포인트 ) 증가

					++Final_Review_O;

					// 만약 입력한 답이 정답과 다르면 ( 오답이면 )

				}
				else {

					// 오답 멘트 출력

					printf("\n\n   오답입니다 !!\n\n\n");

					// 정답이 무엇인지 확인

					// 글자색은 빨강색, 배경색은 진한 하얀색으로 변경

					console_color_change(4, 15);

					printf("   정답은 %s 입니다.\n\n\n", Array_Word[Final_Review_H_Random_1][Final_Review_H_Random_2]);

					// 글자색은 검정색, 배경색은 진한 하얀색으로 변경

					console_color_change(0, 15);

					++Final_Review_X;
				}

				// 단어 수 증가 ( 다음 단어 )

				++Final_Review_Word;

			}

		}

		// 정답, 오답 갯수 출력

		printf("\n   맞춘 갯수는 %d 개 입니다. \n", Final_Review_O);
		printf("   틀린 갯수는 %d 개 입니다. \n", Final_Review_X);

	}
	else if (MODE == 4) {

		// HANG MAN GAME

		// 사용 설명

		// --> 1번째 출력 칸 : 정답, 오답, 게임종료를 판단해서 출력해 주는 칸

		// --> 2번째 출력 칸 : 현재 남은 목숨을 표시 ♡

		// --> 3번째 출력 칸 : 몇번째 문제인지와 문제를 출력함 ( 정답의 칸 수 만큼 _ 로 표시 )

		// --> 4번째 출력 칸 : 현재까지 입력한 알파벳을 보여주는 칸

		// --> 5번째 입력 칸 : 알파벳을 키보드로부터 입력 받음

		// 목숨은 10개이며 목숨이 없거나 10문제를 맞추면 게임 종료

		// 랜덤 함수 초기화

		srand((unsigned)time(NULL));

		// 소개 맨트 

		// 줄바꿈

		printf("\n");

		printf("==================================================================================================================================\n");
		printf("===================================================== WELCOME TO HANG MAN GAME ===================================================\n");
		printf("==================================================================================================================================\n\n");

		printf("==================================================================================================================================\n");
		printf("========================= 목숨은 10개이며 목숨이 없거나 10문제를 맞추면 게임 종료 ( 게임 시작 : Enter ) ==========================\n");
		printf("==================================================================================================================================\n\n");

		// Enter 를 입력 받기 위해 사용 

		// 입력 버퍼 1번 비움

		getchar();
		getchar();

		// 문제를 다 맞추거나 ( 10 문제 ) 목숨이 없으면 

		while (1) {

			// 화면에 출력된 결과 모두 지우기

			system("cls");

			// 정답이면 ( 정답 : 1, 오답 : 0 )

			if (HangMan_O == 1) {

				// 정답이 계속 반복되지 않게 초기화

				HangMan_O = 0;

				// 현재까지 입력된 알파벳이 계속 더해지지 않도록 초기화

				for (int x = 0; x < 30; x++) {

					HangMan_History_Array[x] = '\0';

				}

				// 다음 문제로 넘어감으로써 현재까지 입력한 알파벳을 초기화 하기위해 초기화

				HangMan_Temp_Int = 0;

				// 다음 문제로 넘어감으로써 정답과 입력한 알파벳 비교 변수 초기화

				HangMan_Count = 0;

				// 다음 문제로 넘어갔다는 표시

				HangMan_Next_Question = 1;

				// 문제 증가

				++HangMan_Question;

				// 다음 문제로 넘어감으로써 목숨 초기화 ( 다시 10 개 ) 

				HangMan_Heart = 10;

				// 줄바꿈 * 2

				printf("\n\n");

				// 글자색은 파랑색, 배경색은 진한 하얀색으로 변경

				console_color_change(1, 15);

				printf("   빙고 ~~~ 선택한 알파벳이 맞습니다\n\n\n");

				// 글자색은 검정색, 배경색은 진한 하얀색으로 변경

				console_color_change(0, 15);

			}
			else if (HangMan_X == 1) {

				// 오답이 계속 반복되지 않게 초기화

				HangMan_X = 0;

				--HangMan_Heart;

				// 줄바꿈 * 2

				printf("\n\n");

				// 글자색은 빨강색, 배경색은 진한 하얀색으로 변경

				console_color_change(4, 15);

				printf("   땡 !!! 선택한 알파벳이 아닙니다\n\n\n");

				// 글자색은 검정색, 배경색은 진한 하얀색으로 변경

				console_color_change(0, 15);

			}
			else {

				// 줄바꿈 * 5

				printf("\n\n\n\n\n");

			}

			// 문제가 10 개 초과이거나, 목숨이 없다면

			if (HangMan_Question > 10) {

				printf("   축하합니다 ~~~ 모든 문제를 모두 맞추셨습니다\n\n\n");

				// while 문 종료

				break;

			}
			else if (HangMan_Heart == 0) {

				printf("   ㅠㅠ 목숨이 없습니다 ... 다음에 다시 도전하세요\n\n\n");

				// while 문 종료

				break;

			}

			// 남은 목숨 출력

			printf("   남은 목숨은 : ");

			// 숫자 1 당 ♡ 로 변화

			for (int i = 0; i < HangMan_Heart; i++) {

				printf("♡");

			}

			// 만약 다음 문제라면 ( 혹은 처음이라면 )

			if (HangMan_Next_Question == 1) {

				// 계속 다음 문제이지 않게 초기화

				HangMan_Next_Question = 0;

				// 0 ~ 9 중 랜덤 수 1개 뽑음

				HangMan_Random_1 = rand() % 10;

				// 0 ~ 19 중 랜덤 수 1개 뽑음

				HangMan_Random_2 = rand() % 20;

				// 20 번 반복 ( 0 ~ 19 )

				for (int n = 0; n < 20; n++) {

					// 1 ~ 10 중 1개의 결과에 따라 DAY 변경 ( 함수 이용 )

					Change_Check_Overlaps_Pointer(HangMan_Random_1);

					// 뽑은 랜덤 수가 중복인지 아닌지 확인

					if (HangMan_Random_2 == Check_Overlaps_Pointer[n]) {

						// 뽑은 수가 중복이 아니면 100 을 대입

						// -> 다음에 중복이 되게 하기 위해서

						Check_Overlaps_Pointer[n] = 100;

						// for 문 종료

						break;

						// 뽑은 랜덤 수가 중복이라면

					}
					else if ((n == 19) && (Check_Overlaps_Pointer[HangMan_Random_2] == 100)) {

						// for 문을 다시 돌려야 함으로 n 초기화

						n = -1;

						// rand 함수로 다시 랜덤 수 뽑음

						HangMan_Random_1 = rand() % 10;

						HangMan_Random_2 = rand() % 20;

						// continue 로 다시 반복

						continue;

					}

				}

				// 랜덤으로 뽑은 값의 배열값을 임시배열에 복사 ( Strcpy )

				strcpy(HangMan_Temp_Char, Array_Word[HangMan_Random_1][HangMan_Random_2]);

				// 임시배열의 문자열의 길이를 반환

				HangMan_Length = strlen(HangMan_Temp_Char);

				// 길이만큼 임시 배열에 _ 를 저장

				for (int h = 0; h < HangMan_Length; h++) {

					HangMan_Temp_Array[h] = '_';

				}

			}

			// 줄바꿈 * 5

			printf("\n\n\n\n\n");

			// 문제 출력

			printf("   Q%d. ", HangMan_Question);

			// 문자열의 길이만큼 _ 를 출력 ( 처음에는 )

			for (int u = 0; u < HangMan_Length; u++) {

				printf("%c ", HangMan_Temp_Array[u]);

			}

			// 줄바꿈 * 5

			printf("\n\n\n\n\n");

			// 현재까지 입력한 알파벳 출력

			printf("   현재까지 입력한 알파벳 : ");

			// 현재까지 입력한 알파벳을 출력 ( 처음에는 비어있음 )

			for (int x = 0; x < 30; x++) {

				printf("%c ", HangMan_History_Array[x]);

			}

			// 줄바꿈 * 5

			printf("\n\n\n\n\n");

			// 입력화면 출력

			printf("   알파벳을 입력하세요 :");

			// 알파벳 입력 받음 ( 문자는 & 를 붙임 )

			scanf(" %c", &HangMan_Answer);

			// 입력받은 알파벳을 현재까지 입력한 알파벳 배열에 추가

			HangMan_History_Array[HangMan_Temp_Int] = HangMan_Answer;

			// 입력받은 알파벳을 현재까지 입력한 알파벳 배열에 추가하기 위해 증가

			++HangMan_Temp_Int;

			// 정답과 입력한 알파벳 비교

			for (int y = 0; y < HangMan_Length; y++) {

				// 입력한 알파벳이 정답일때

				if (HangMan_Answer == Array_Word[HangMan_Random_1][HangMan_Random_2][y]) {

					// 임시 배열에 _ 대신 입력한 알파벳 대입

					HangMan_Temp_Array[y] = HangMan_Answer;

					// 모든 알파벳이 다 맞는지를 카운트 하기 위해 증가

					++HangMan_Count;

					// 한 알파벳이라도 정답과 맞으면 ON 표시 ( ON : 1, OFF : 0 )

					HangMan_Switch = 1;

				}

				// 모든 알파벳 다 맞았을 때 ( 입력한 알파벳들과 정답이 모두 일치할때 )

				if (HangMan_Count >= HangMan_Length) {

					// 정답 문구 출력 표시 ( 정답 : 1 )

					HangMan_O = 1;

					// for 문 탈출

					break;

				}

			}

			// 알파벳이 맞지 않을 때 ( 입력한 알파벳들과 정답이 모두 일치하지 않을때 )

			if (HangMan_Switch == 0) {

				// 오답 문구 출력 표시 ( 오답 : 1 )

				HangMan_X = 1;

			}

			// 한 알파벳이 일치해서 ON 이 되었을 때 계속 ON 이지 않도록 초기화

			HangMan_Switch = 0;

		}

	}
	return 0;
}

void console_window() {

	// 콘솔창 크기 설정

	system("mode con cols=130 lines=40");

	// cols = 가로, lines = 세로 (가로가 세로보다 짧음)

	// 콘솔창 제목 설정

	system("title EASY ENGLISH WORD BOOK");

	// 콘솔창 배경색 + 글자색 설정

	system("color F0");
}

void console_color_change(int text_color, int background_color) {

	// 글자색 + 배경색 바꾸기

	// 글자색은 빨강색, 배경색은 진한 하양색

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text_color | (background_color << 4));

}


char choice_BMH(char* pointer_BMH) {

	// 단어장 종류 선택 문구 출력 

	printf("==================================================================================================================================\n");
	printf("===== 단어장 종류를 선택해 주세요. ( 단어장 종류은 Basic, Mid, High 이 있습니다. B, M, H 중 원하는 단어장를 입력해 주세요. ) =====\n");
	printf("==================================================================================================================================\n\n\n :");

	// B, M, H 중 1개를 선택 할 때까지 계속 반복

	while (1) {

		// 단어장 종류 입력 받음 ( B, M, H 중 1개 )

		scanf(" %c", pointer_BMH);

		// 줄바꿈 * 1

		printf("\n");

		// 콘솔 화면 출력된 모든결과 지우기

		system("cls");

		// 만약 입력 받은 값이 B, M, H 라면 break 아니라면 반복

		if (*pointer_BMH == 'B' || *pointer_BMH == 'M' || *pointer_BMH == 'H') {

			break;

		}
		else {

			printf("==================================================================================================================================\n");
			printf("===== 선택한 단어장이 없습니다 ... ( B, M, H 중 원하는 단어장을 입력해 주세요. ) =================================================\n");
			printf("==================================================================================================================================\n\n\n :");

		}

		// 입력 받은 값 ( B, M, H ) 확인

		// printf("%c", *pointer_BMH);
	}

	return 0;

}

int choice_mode(int* pointer_MODE) {

	// MODE 를 선택 할 때 까지 계속 반복

	while (1) {

		// 단어장 MODE 선택 문구 출력

		printf("==================================================================================================================================\n");
		printf("================================================== 원하는 MODE 를 선택해 주세요. =================================================\n");
		printf("==================================================================================================================================\n\n");

		printf("==================================================== LOOK MODE :         1번 =====================================================\n\n");
		printf("==================================================== REVIEW MODE :       2번 =====================================================\n\n");
		printf("==================================================== FINAL REVIEW MODE : 3번 =====================================================\n\n");
		printf("==================================================== ALPHABET GAME :     4번 =====================================================\n\n\n :");

		// 단어장 MODE 입력 받음

		scanf("%d", pointer_MODE);

		// 줄바꿈 * 1

		printf("\n\n");

		// 콘솔 화면 출력된 모든결과 지우기

		system("cls");

		// 만약 입력 받은 값이 MODE 중 있다면 break 아니라면 반복

		if (*pointer_MODE > 0 && *pointer_MODE <= 4) {

			break;

		}
		else {

			printf("==================================================================================================================================\n");
			printf("===== 선택한 MODE 가 없습니다 ... 다시 선택해 주세요 ... =========================================================================\n");
			printf("==================================================================================================================================\n\n\n");

		}

		// 입력 받은 값

		// printf("%d", *pointer_MODE);
	}

	return 0;
}

int choice_day(int* pointer_DAY, int check_MODE) {

	// MODE 가 1이면 "보기" 를, MODE 가 2이면 "복습" 을 출력

	char* Print_MODE = "보기";

	if (check_MODE == 1) {
		Print_MODE = "보기";
	}
	else if (check_MODE == 2) {
		Print_MODE = "복습";
	}

	// DAY 선택 문구 출력 

	printf("==================================================================================================================================\n");
	printf("======================================= %s를 원하는 DAY 를 입력해 주세요. ( 1 ~ 50 DAY ) =======================================\n", Print_MODE);
	printf("==================================================================================================================================\n\n\n :");

	// DAY ( 1 ~ 50 ) 중 1개를 입력할 때까지 계속 반복

	while (1) {

		// DAY 입력 받음 ( 1 ~ 50 )

		scanf("%d", pointer_DAY);

		// 줄바꿈 * 1

		printf("\n");

		// 콘솔 화면 출력된 모든결과 지우기

		system("cls");

		// 만약 입력 받은 값이 1 ~ 50 이라면 break 아니라면 반복

		if (*pointer_DAY > 0 && *pointer_DAY <= 50) {

			break;

		}
		else {

			printf("==================================================================================================================================\n");
			printf("===== 입력한 DAY 가 없습니다 ... ( 1 ~ 50 중 보기를 원하는 DAY 를 입력해 주세요. ) ===============================================\n");
			printf("==================================================================================================================================\n\n\n :");

		}

		// 입력 받은 값 ( 1 ~ 50 ) 확인

		// printf("%d", *pointer_DAY);
	}

	return 0;

}

int choice_level(int* pointer_LEVEL) {

	// LEVEL 를 선택 할 때 까지 계속 반복

	while (1) {

		// 단어장 LEVEL 선택 문구 출력

		printf("==================================================================================================================================\n");
		printf("================================================== 원하는 LEVEL 을 선택해 주세요. ================================================\n");
		printf("==================================================================================================================================\n\n");

		printf("======================================== NORMAL ( 뜻 문제, 단어 4개 중 1개 Choice ) : 1번 ========================================\n\n");
		printf("======================================== HARD   ( 단어 문제, 뜻 4개 중 1개 Choice ) : 2번 ========================================\n\n");
		printf("======================================== HELL   ( 뜻 문제, 뜻에 맞는 단어 Write )   : 3번 ========================================\n\n\n :");

		// 단어장 MODE 입력 받음

		scanf("%d", pointer_LEVEL);

		// 줄바꿈 * 1

		printf("\n\n");

		// 콘솔 화면 출력된 모든결과 지우기

		system("cls");

		// 만약 입력 받은 값이 MODE 중 있다면 break 아니라면 반복

		if (*pointer_LEVEL > 0 && *pointer_LEVEL <= 3) {

			break;

		}
		else {

			printf("==================================================================================================================================\n");
			printf("===== 선택한 LEVEL 이 없습니다 ... 다시 선택해 주세요 ... ========================================================================\n");
			printf("==================================================================================================================================\n\n\n");

		}

		// 입력 받은 값

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
