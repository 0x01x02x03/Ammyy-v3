#pragma pack(push, 1)

struct MessageStr {
	UINT16 key;
	CHAR* str;
};

// LANGUAGE LANG_ENGLISH, SUBLANG_ENGLISH_US
// code_page(1252)
struct MessageStr StringsEnglish[] = {
	{ D_CLIENT,		            "Client" },
	{ D_OPERATOR,	            "Operator" },
	{ D_CONNECT,                "Connect" },
	{ D_EXIT,					"Exit" },
	{ D_SERVICE,				"Service" },
	{ D_INSTALL,				"Install" },
	{ D_START,					"Start" },
	{ D_STOP,					"Stop" },
	{ D_REMOVE,					"Remove" },
	{ D_ADD,					"Add" },
	{ D_EDIT,					"Edit" },
	{ D_SETTINGS,				"Settings" },
	{ D_SETTINGS_COMMON,		"Common" },
	{ D_SETTINGS_NETWORK,		"Network" },
	{ D_ACCEPT,                 "&Accept" },
	{ D_REJECT,                 "&Reject" },
	{ D_YOUR_ID,                "Your ID" },
	{ D_CLIENT_ID,              "Client ID/ IP" },
	{ D_VIEW_ONLY,				"View only" },
	{ D_CLIENT_ID_NOT_PROVIDED, "Please enter client ID/ IP" },
	{ D_ACCESS_PERMISSIONS,     "Access Permissions" },
	{ D_CONTACT_BOOK,	        "Contact book" },
	{ D_REQUEST_ROUTER,			"Request client's router IP" },
	{ D_WARN_FULL_SCREEN,		"Warn at switching to the full-screen mode" },
	{ D_LOGGING_FOR_DEBUG,		"Log debugging info into file" },
	{ D_RUN_UNDER_SYSTEM,		"Run under SYSTEM account on %S" },
	{ D_PROTECT_SETTINGS,		"Protect these settings from remote operator" },
	{ D_OFF_DESKTOP_BACKGROUND,	"Disable desktop background" },
	{ D_OFF_DESKTOP_COMPOSITION,"Disable desktop composition" },
	{ D_OFF_DESKTOP_EFFECTS,    "Disable visual effects" },
	{ D_SHOW_HINTS,				"Show tooltip - mouse cursor blinking cause" },
	{ D_PCNotFound,             "The computer ID=%u wasn't found." },
	{ D_REMOTEPC_CLOSE,         "The remote computer closed this session." },
	{ D_WARN_DIFF_VERSIONS,     "The remote pc uses Ammyy Admin v%s\nIt's other version, so the program can work incorrectly!" },
	{ D_ACCEPT_CONN_TEXT,       "Operator%s is connecting to your PC." }, // %s => " (ID=1234)" or ""
	{ D_REMEMBER_MY_ANSWER,     "Remember my answer for this operator" },
	//{ D_ENABLE_INPUT,           "Enable remote keyboard and mouse" },
	{ D_VIEW_SCREEN,            "View screen" },
	{ D_REMOTE_CONTROL,			"Remote control" },
	{ D_ENABLE_FS,              "File manager" },
	{ D_AUDIO_CHAT,				"Audio chat" },
	{ D_RDP_SESSION,			"RDP sessions" },	
	{ D_ACCESSREJECTED,         "Remote computer rejected your query to access." },
	{ D_WAITING_AUTHORIZATION,  "Waiting for authorization from remote PC" },
	{ D_SESSION_INACTIVE,       "This session is inactive.\nYou can reconnect to an active session in a few seconds." },
	{ D_LOCAL_CURSOR_SHAPES,	"Dot|Small dot|Normal arrow|No cursor" },
	{ D_REMOTE_CURSOR_SHAPES,	"Don't show|Show shape|Show shape and position" },
	{ D_ACCESS_FILES_CUR_USER,	"Access files under current user account" },
	{ D_START_CLIENT,           "Start \"wait for session\" mode automatically" },
	{ D_WAIT_FOR_SESSION,		"Wait for session" },
	{ D_CREATE_SESSION,			"Create session" },
	{ D_COMPUTER_BUSY,          "The remote computer exceeded concurrent sessions limit" },
	{ D_EXCEED_SESSIONS_VIEWER, "You've exceeded %u sessions limit for %S license on this computer" },
	{ D_BUY_LICENSE,            "Please consider buying a license" }
};

// LANGUAGE LANG_RUSSIAN, SUBLANG_DEFAULT
// code_page(1251)
struct MessageStr StringsRussian[] = {
	{ D_START,	                "���������" },
	{ D_STOP,                   "����������" },
	{ D_CONNECT,                "������������" },
	{ D_YOUR_ID,                "��� ID" },
	{ D_CLIENT,		            "������" },
	{ D_OPERATOR,	            "��������" },
	{ D_CLIENT_ID_NOT_PROVIDED, "����������, ������� ID/ IP �������" },
	{ D_CLIENT_ID,              "ID/ IP �������" },
	{ D_VIEW_ONLY,				"������ ��������" },
	{ D_PCNotFound,             "��������� ID=%u �� ������" },
	{ D_REMOTEPC_CLOSE,         "��������� ��������� �������� ������� ������." },
	{ D_WARN_DIFF_VERSIONS,     "��������� ��������� ���������� Ammyy Admin v%s\n ��� ������ ������, ������� ��������� ����� �������� �����������!" },
	{ D_ACCEPT,                 "&���������" },
	{ D_REJECT,                 "&���������" },
	{ D_ACCEPT_CONN_TEXT,       "��������%s ����� ���������� � ���� ����������." },
	{ D_REMEMBER_MY_ANSWER,     "��������� ��� ����� ��� ������� ���������" },
	//{ D_ENABLE_INPUT,           "��������� ���������� ����������� � ����� � ���������� ����������" },
	{ D_VIEW_SCREEN,			"�������� ������" },
	{ D_REMOTE_CONTROL,			"��������� ����������" },
	{ D_ENABLE_FS,              "�������� ������" },
	{ D_AUDIO_CHAT,				"��������� ���" },
	{ D_RDP_SESSION,			"RDP ������" },
	{ D_ACCESSREJECTED,         "��������� ��������� �������� ��� ������ �� �����������." },
	{ D_WAITING_AUTHORIZATION,  "�������� ����������� �� ���������� ����������." },
	{ D_ACCESS_PERMISSIONS,     "����� �������" },
	{ D_CONTACT_BOOK,	        "���������� �����" },
	{ D_EXIT,                   "�����" },
	{ D_SERVICE,                "������" },
	{ D_INSTALL,                "����������" },
	{ D_REMOVE,                 "�������" },
	{ D_ADD,                    "��������" },
	{ D_EDIT,                   "�������������" },
	{ D_SETTINGS,               "���������" },
	{ D_SETTINGS_COMMON,        "�����" },
	{ D_SETTINGS_NETWORK,       "����" },
	{ D_REQUEST_ROUTER,			"����������� IP ����������� �������" },
	{ D_WARN_FULL_SCREEN,		"������������� ��� ������������ �� ������������� �����" },
	{ D_LOGGING_FOR_DEBUG,		"���������� � ���� ���������� ����������" },
	{ D_RUN_UNDER_SYSTEM,		"��������� ��� ��������� ��������� �� %S" },
	{ D_PROTECT_SETTINGS,		"�������� ��� ��������� �� ���������� ���������" },
	{ D_OFF_DESKTOP_BACKGROUND,	"��������� ������� ������� �������� �����" },
	{ D_OFF_DESKTOP_EFFECTS,    "��������� ���������� �������" },
	{ D_OFF_DESKTOP_COMPOSITION,"��������� ���������� �������� �����" },
	{ D_SHOW_HINTS,				"���������� ����������� ��������� - ������� �������� ������� �����" },
	{ D_ACCESS_FILES_CUR_USER,	"������ � ������ ��� ��������� �������� ������������" },
	{ D_START_CLIENT,           "������������� ��������� ����� �������� ������" },
	{ D_WAIT_FOR_SESSION,		"�������� ������" },
	{ D_CREATE_SESSION,			"�������� ������" },
	{ D_COMPUTER_BUSY,          "��������� ��������� �������� ����� ������������� ������" },
	{ D_EXCEED_SESSIONS_VIEWER, "�� ��������� ����� %u ������ ��� %S �������� �� ���� ����������" },
	{ D_BUY_LICENSE,            "����������, ����������� ����������� ������� ��������" }
};

// LANGUAGE LANG_HUNGARIAN, SUBLANG_DEFAULT
// code_page(1250)
struct MessageStr StringsHungarian[] = {
    { D_START,					"Ind�t�s" },
    { D_CONNECT,				"Kapcsol�d�s" },
    { D_STOP,					"Le�ll�t�s" },
    { D_YOUR_ID,				"Az �n ID-je" },
	{ D_CLIENT,					"Kliens" },
	{ D_OPERATOR,				"oper�tor" },
    { D_CLIENT_ID_NOT_PROVIDED, "K�rem, adja meg a kliens ID-j�t" },
    { D_CLIENT_ID,				"Kliens ID/IP" },
    { D_PCNotFound,				"A k�vetkezo ID nem tal�lhat�: %u" },
    { D_REMOTEPC_CLOSE,			"A t�voli sz�m�t�g�p megszak�totta a kapcsolatot" },
    { D_WARN_DIFF_VERSIONS,		"A t�voli sz�m�t�g�p �ltal haszn�lt Ammyy Admin verzi�: v%s\nMivel a verzi� elt�ro, hib�s muk�d�s l�phet fel." },
    { D_ACCEPT,					"&Elfogad" },
    { D_REJECT,					"&Elutas�t" },
    { D_ACCEPT_CONN_TEXT,		"A k�vetkezo%s sz�m� oper�tor az �n sz�m�t�g�p�hez kapcsol�dik" },
    { D_REMEMBER_MY_ANSWER,		"Eml�kezzen a v�laszomra ezt az oper�tort illetoen" },
    //{ D_ENABLE_INPUT,			"T�voli eg�r �s billentyuzet enged�lyez�se" },
    { D_ENABLE_FS,				"F�jlrendszer el�r�s�nek enged�lyez�se" },
    { D_ACCESSREJECTED,			"A t�voli sz�m�t�g�p visszautas�totta a kapcsolat elfogad�s�t." },
    { D_WAITING_AUTHORIZATION,	"V�rakoz�s a t�voli sz�m�t�g�p enged�ly�re." },
    { D_SESSION_INACTIVE,		"A kapcsolat inakt�v.\n�jrakapcsol�dhat n�h�ny m�sodperc m�lva." },
    { D_COMPUTER_BUSY,			"A t�voli sz�m�t�g�pen egy m�sik kapcsolat m�r akt�v." }
};

// LANGUAGE LANG_DANISH, SUBLANG_DEFAULT
// code_page(1252)
struct MessageStr StringsDanish[] = {
    { D_START,					"Start" },
    { D_CONNECT,				"Tilslut" },
    { D_STOP,					"Stop" },
    { D_YOUR_ID,				"ID" },
	{ D_CLIENT,					"Klient" },
	{ D_OPERATOR,				"Operat�r" },
    { D_CLIENT_ID_NOT_PROVIDED, "Venligst angiv Klient-ID" },
    { D_CLIENT_ID,				"Klient-ID/IP" },
    { D_PCNotFound,				"Computer med ID=%u ikke fundet" },
    { D_REMOTEPC_CLOSE,			"Fjernbrugeren afsluttede sessionen" },
    { D_WARN_DIFF_VERSIONS,		"Fjernbrugeren anvender Ammyy Admin v%s\n Programmet virker muligvis ikke korekt." },
    { D_ACCEPT,					"&Godkend" },
    { D_REJECT,					"&Afvis" },
    { D_ACCEPT_CONN_TEXT,		"Admin med%s tilslutter til din PC" },
    { D_REMEMBER_MY_ANSWER,		"Gem mit svar" },
    { D_ENABLE_INPUT,			"Tillad fjernstyring af mus og tastatur." },
    { D_ENABLE_FS,				"Tillad adgang til filer" },
    { D_ACCESSREJECTED,			"Adgang n�gtet" },
    { D_WAITING_AUTHORIZATION,	"Afventer godkendelse fra fjern PC." },
    { D_SESSION_INACTIVE,		"Denne session er inaktiv. \n Du kan tilslutte igen om et �jeblik." },
    { D_COMPUTER_BUSY,			"Fjerncomputeren er optaget af en anden session." }
};

// LANGUAGE LANG_GERMAN, SUBLANG_GERMAN
// code_page(1252)
struct MessageStr StringsGerman[] = {
    { D_START,					"Start" },
    { D_CONNECT,				"Verbinden" },
    { D_STOP,					"Stop" },
    { D_YOUR_ID,				"Ihre ID" },
	{ D_CLIENT,					"Kunde" },
	{ D_OPERATOR,				"Operator" },
    { D_CLIENT_ID,				"Kunden ID/IP" },
    { D_PCNotFound,				"Der Computer mit der ID=%u wurde nicht gefunden." },
    { D_REMOTEPC_CLOSE,			"Der entfernte Computer hat die Verbindung beendet." },
    { D_WARN_DIFF_VERSIONS,		"Das Programm kann nicht korrekt arbeiten, da der entfernte Computer eine andere Version von Ammyy Admin v%s\n verwendet." },
    { D_ACCEPT,					"&Akzeptieren" },
    { D_REJECT,					"&Verwerfen" },
    { D_ACCEPT_CONN_TEXT,		"Operator mit%s verbindet sich mit Ihrem Computer." },
    { D_REMEMBER_MY_ANSWER,		"Antwort f�r diesen Operator merken" },
    { D_ENABLE_INPUT,			"Aktiviere Fernsteuerung der Tastatur und der Maus" },
    { D_ENABLE_FS,				"Aktiviere Zugriff auf das Dateisystem" },
    { D_ACCESSREJECTED,			"Der entfernter Computer lehnt Ihre Zugriffsanfrage ab." },
    { D_WAITING_AUTHORIZATION,	"Warten auf Autorisierung durch den entfernten Computer" },
    { D_SESSION_INACTIVE,		"Die Session ist inaktiv.\n Sie k�nnen sich mit der aktive Session in wenigen Sekunden erneut verbinden." },
    { D_COMPUTER_BUSY,			"Der entfernte Computer ist durch eine andere Session belegt." }
};

// LANGUAGE LANG_FINNISH, SUBLANG_DEFAULT
// code_page(1252)
struct MessageStr StringsFinnish[] = {
    { D_START,					"Aloita" },
    { D_CONNECT,				"Yhdist�" },
    { D_STOP,					"Pys�yt�" },
    { D_YOUR_ID,				"ID-numero" },
	{ D_CLIENT,					"Asiakas" },
	{ D_OPERATOR,				"Operaattori" },
    { D_CLIENT_ID_NOT_PROVIDED, "Sy�t� asiakas-ID" },
    { D_CLIENT_ID,				"Asiakas-ID/IP" },
    { D_PCNotFound,				"Tietokonetta ID:ll� %u ei l�ydy." },
    { D_REMOTEPC_CLOSE,			"Et�tietokone sulki yhteyden." },
    { D_WARN_DIFF_VERSIONS,		"Ohjelma ei voi toimia oikein. Et�tietokoneen k�yt�ss� on eri versio Ammyy Admin v%s\n ohjelmistosta." },
    { D_ACCEPT,					"&Hyv�ksy" },
    { D_REJECT,					"H&ylk��" },
    { D_ACCEPT_CONN_TEXT,		"Operaattori%s yritt�� yhdist�� tietokoneellesi." },
    { D_REMEMBER_MY_ANSWER,		"Muista valinta t�lle operaattorille" },
    { D_ENABLE_INPUT,			"Salli n�pp�imist�n ja hiiren k�ytt�" },
    { D_ENABLE_FS,				"Salli tiedostojen k�ytt�" },
    { D_ACCESSREJECTED,			"Et�tietokone hylk�si yhteysyrityksen." },
    { D_WAITING_AUTHORIZATION,	"Odotetaan valtuutusta et�tietokoneelta" },
    { D_SESSION_INACTIVE,		"Istunto ei ole aktiivinen. \nAktivoidaksesi istunnon, voit yhdist�� uudelleen hetken kuluttua." },
    { D_COMPUTER_BUSY,			"Varattu, et�tietokoneessa on toinen istunto auki." }
};

// LANGUAGE LANG_FRENCH, SUBLANG_FRENCH
// code_page(1252)
struct MessageStr StringsFrench[] = {
    { D_START,					"D�marrer" },
    { D_CONNECT,				"Connexion" },
    { D_STOP,					"Arr�ter" },
    { D_YOUR_ID,				"Votre ID" },
	{ D_CLIENT,					"Client" },
	{ D_OPERATOR,				"Op�rateur" },
    { D_CLIENT_ID_NOT_PROVIDED, "Veuillez saisir l'ID client" },
    { D_CLIENT_ID,				"ID/IP Client" },
    { D_PCNotFound,				"Impossible de trouver l'ordinateur distant (ID=%u)." },
    { D_REMOTEPC_CLOSE,			"L'ordinateur distant a ferm� la session." },
    { D_WARN_DIFF_VERSIONS,		"L'ordinateur distant utilise Ammy Admin v%s\nC'est une autre version et la connexion est impossible." },
    { D_ACCEPT,					"&Accepter" },
    { D_REJECT,					"&Rejeter" },
    { D_ACCEPT_CONN_TEXT,		"L'op�rateur%s se connecte votre ordinateur." },
    { D_REMEMBER_MY_ANSWER,		"M�moriser ma r�ponse pour cet op�rateur" },
    { D_ENABLE_INPUT,			"Activer le clavier et la souris distants" },
    { D_ENABLE_FS,				"Activer l'acc�s aux fichiers" },
    { D_ACCESSREJECTED,			"L'ordinateur distant a rejet� votre demande." },
    { D_WAITING_AUTHORIZATION,	"En attente d'autorisation..." },
    { D_SESSION_INACTIVE,		"Cette session est inactive.\nVous pourrez vous reconnecter dans quelques secondes." },
    { D_COMPUTER_BUSY,			"L'ordinateur distant est d�j� connect� sur une autre session." }
};

// LANGUAGE LANG_ITALIAN, SUBLANG_ITALIAN
// code_page(1252)
struct MessageStr StringsItalian[] = {
    { D_START,					"Avvia" },
    { D_CONNECT,				"Connetti" },
    { D_STOP,					"Arresta" },
    { D_YOUR_ID,				"Il tuo ID" },
	{ D_CLIENT,					"Utente" },
	{ D_OPERATOR,				"Operatore" },
    { D_CLIENT_ID_NOT_PROVIDED, "Inserisci ID" },
    { D_CLIENT_ID,				"ID/IP Client" },
    { D_PCNotFound,				"Impossibile trovare il computer con ID=%u." },
    { D_REMOTEPC_CLOSE,			"Il computer remoto ha chiuso la sessione." },
    { D_WARN_DIFF_VERSIONS,		"Il computer remoto utilizza Ammyy Admin v%s\nIl programma non pu? funzionare correttamente." },
    { D_ACCEPT,					"&Accetta" },
    { D_REJECT,					"&Rifiuta" },
    { D_ACCEPT_CONN_TEXT,		"Un'operatore con%s si sta connettendo al tuo computer." },
    { D_REMEMBER_MY_ANSWER,		"Ricorda la mia risposta per questo operatore" },
    { D_ENABLE_INPUT,			"Abilita mouse e tastiera remoti" },
    { D_ENABLE_FS,				"Abilita l'accesso al file system" },
    { D_ACCESSREJECTED,			"Il computer remoto ha rifiutato la tua richiesta di accesso." },
    { D_WAITING_AUTHORIZATION,	"In attesa dell'Autorizzazione dal computer remoto" },
    { D_SESSION_INACTIVE,		"Questa sessione non ? attiva.\nPuoi riconnetterti alla sessione attiva tra qualche secondo." },
    { D_COMPUTER_BUSY,			"Il computer remoto ? occupato in un'altra sessione." }
};

// LANGUAGE LANG_DUTCH, SUBLANG_DUTCH
// code_page(1252)
struct MessageStr StringsDutch[] = {
    { D_START,					"Start" },
    { D_CONNECT,				"Verbinden" },
    { D_STOP,					"Stop" },
    { D_YOUR_ID,				"Uw ID" },
	{ D_CLIENT,					"Client" },
	{ D_OPERATOR,				"Operator" },
    { D_CLIENT_ID_NOT_PROVIDED, "Vul client ID in" },
    { D_CLIENT_ID,				"Client ID/IP" },
    { D_PCNotFound,				"De computer ID=%u is niet gevonden." },
    { D_REMOTEPC_CLOSE,			"De andere computer heeft de sessie afgebroken." },
    { D_WARN_DIFF_VERSIONS,		"De andere computer gebruikt Ammyy Admin v%s\nl's andere versie, en kan problemen geven!" },
    { D_ACCEPT,					"&Accepteer" },
    { D_REJECT,					"&Weiger" },
    { D_ACCEPT_CONN_TEXT,		"Operator met%s is verbinding aan het maken met uw PC." },
    { D_REMEMBER_MY_ANSWER,		"Onthoudt mijn antwoord voor deze operator" },
    { D_ENABLE_INPUT,			"Activeer toetsenbord en muis van andere computer" },
    { D_ENABLE_FS,				"Activeer toegang tot bestanden" },
    { D_ACCESSREJECTED,			"De andere computer heeft toegang geweigerd." },
    { D_WAITING_AUTHORIZATION,	"Op toestemming wachten van andere PC" },
    { D_SESSION_INACTIVE,		"De sessie is niet actief.\n U kunt opnieuw verbinden in enkele seconden" },
    { D_COMPUTER_BUSY,			"De andere computer is bezig met een andere sessie." }
};

// LANGUAGE LANG_NORWEGIAN, SUBLANG_NORWEGIAN_BOKMAL
// code_page(1252)
struct MessageStr StringsNorwegian[] = {
    { D_START,					"Start" },
    { D_CONNECT,				"Tilkople" },
    { D_STOP,					"Avbryt" },
    { D_YOUR_ID,				"Dinn ID" },
	{ D_CLIENT,					"Klient" },
	{ D_OPERATOR,				"Operat�r" },
    { D_CLIENT_ID_NOT_PROVIDED, "Vennligst oppgi klientens ID" },
    { D_CLIENT_ID,				"Klient-ID" },
    { D_PCNotFound,				"Klienten med ID = %U ble ikke funnet" },
    { D_REMOTEPC_CLOSE,			"Klientmaskinen avsluttet sesjonen" },
    { D_WARN_DIFF_VERSIONS,		"Klientmaskinen bruker Ammyy Admin v%s\nDet er en annen versjon, og feil kan oppst�" },
    { D_ACCEPT,					"&Godta" },
    { D_REJECT,					"&Avsl�" },
    { D_ACCEPT_CONN_TEXT,		"Operat�r med%s kopler til din maskin" },
    { D_REMEMBER_MY_ANSWER,		"Husk mine innstillinger for denne operat�ren" },
    { D_ENABLE_INPUT,			"Tillat fjernstyring av mus og tastatur" },
    { D_ENABLE_FS,				"Tillat tilgang til filsystemet" },
    { D_ACCESSREJECTED,			"Klienten nektet deg tilgang" },
    { D_WAITING_AUTHORIZATION,	"Venter p� tillatelse fra klienten" },
    { D_SESSION_INACTIVE,		"Denne sesjonen er inaktiv.\n Du kan kople til p� nytt om noen sekunder" },
    { D_COMPUTER_BUSY,			"Klienten er opptatt med en annen sesjon" }
};

// LANGUAGE LANG_PORTUGUESE, SUBLANG_PORTUGUESE_BRAZILIAN
// code_page(1252)
struct MessageStr StringsPortuguese[] = {
    { D_START,					"Come�ar" },
    { D_CONNECT,				"Conectar" },
    { D_STOP,					"Parar" },
    { D_YOUR_ID,				"Sua ID" },
	{ D_CLIENT,					"Cliente" },
	{ D_OPERATOR,				"Operador" },
    { D_CLIENT_ID_NOT_PROVIDED, "Por favor insira a ID do Cliente" },
    { D_CLIENT_ID,				"Cliente ID/IP" },
    { D_PCNotFound,				"O Computador ID=%u n�o foi encontrado." },
    { D_REMOTEPC_CLOSE,			"O Computador Remoto fechou essa sess�o." },
    { D_WARN_DIFF_VERSIONS,		"O Computador Remoto usa outra vers�o do Ammyy Admin v%s\n� outra vers�o, o programa poder� trabalhar incorretamente!" },
    { D_ACCEPT,					"&Aceitar" },
    { D_REJECT,					"&Rejeitar" },
    { D_ACCEPT_CONN_TEXT,		"O Operador com%s esta conectando ao seu PC." },
    { D_REMEMBER_MY_ANSWER,		"Relembrar minha resposta para este operador" },
    { D_ENABLE_INPUT,			"Permitir teclado e mouse remoto" },
    { D_ENABLE_FS,				"Permitir acesso ao arquivo de sistema" },
    { D_ACCESSREJECTED,			"O computador Remoto rejeitou seu pedido de acesso." },
    { D_WAITING_AUTHORIZATION,	"Esperando Autoriza��o do PC Remoto." },
    { D_SESSION_INACTIVE,		"Esta sess�o esta inativa.\nVoc� poder� reconectar em alguns segundos." },
    { D_COMPUTER_BUSY,			"O computador Remoto est� ocupado com outra sess�o." },
};

// LANGUAGE LANG_SWEDISH, SUBLANG_DEFAULT
// code_page(1252)
struct MessageStr StringsSwedish[] = {
    { D_START,					"Start" },
    { D_CONNECT,				"Anslut" },
    { D_STOP,					"Stopp" },
    { D_YOUR_ID,				"Ditt ID" },
	{ D_CLIENT,					"Klient" },
	{ D_OPERATOR,				"Operat�r" },
    { D_CLIENT_ID_NOT_PROVIDED, "V�nligen ange klientens ID" },
    { D_CLIENT_ID,				"Klient-ID/IP" },
    { D_PCNotFound,				"Datorn med ID=%u hittades inte" },
    { D_REMOTEPC_CLOSE,			"Fj�rrdatorn avslutade sessionen" },
    { D_WARN_DIFF_VERSIONS,		"Fj�rrdatorn anv�nder Ammyy Admin v%s\nDet �r en annan version, s� programmet kanske inte fungerar." },
    { D_ACCEPT,					"&Acceptera" },
    { D_REJECT,					"&Neka" },
    { D_ACCEPT_CONN_TEXT,		"Operat�r med%s ansluter till din PC." },
    { D_REMEMBER_MY_ANSWER,		"Kom ih�g mitt svar f�r denna operat�r" },
    { D_ENABLE_INPUT,			"Till�t fj�rrstyrning av tangentbord och mus" },
    { D_ENABLE_FS,				"Till�t �tkomst till filsystemet" },
    { D_ACCESSREJECTED,			"Fj�rrdatorn nekade �tkomst." },
    { D_WAITING_AUTHORIZATION,	"V�ntar p� till�telse fr�n fj�rdatorn" },
    { D_SESSION_INACTIVE,		"Denna session �r inaktiv.\n Du kan �teransluta till aktiv session om n�gra sekunder." },
    { D_COMPUTER_BUSY,			"Fj�rrdatorn �r upptagen med andra sessioner." }
};

// LANGUAGE LANG_SPANISH, SUBLANG_SPANISH_MODERN
// code_page(1252)
struct MessageStr StringsSpanish[] = {
    { D_START,					"Comenzar" },
    { D_CONNECT,				"Conectar" },
    { D_STOP,					"Detener" },
    { D_YOUR_ID,				"Su ID" },
	{ D_CLIENT,					"Cliente" },
	{ D_OPERATOR,				"Operador" },
    { D_CLIENT_ID_NOT_PROVIDED, "Por favor ingrese el ID del cliente" },
    { D_CLIENT_ID,				"ID/IP Cliente" },
    { D_PCNotFound,				"El ordenador con el ID=%u no se ha encontrado." },
    { D_REMOTEPC_CLOSE,			"El ordenador remoto ha finalizado la sesi�n." },
    { D_WARN_DIFF_VERSIONS,		"La PC remota utiliza otra versi�n de Ammyy Admin v%s\nIt's, por lo que la aplicaci�n podr�a no funcionar correctamente." },
    { D_ACCEPT,					"&Aceptar" },
    { D_REJECT,					"&Rechazar" },
    { D_ACCEPT_CONN_TEXT,		"El Operador con la%s est� conectandose a su PC." },
    { D_REMEMBER_MY_ANSWER,		"Recordar la respuesta para �ste operador." },
    { D_ENABLE_INPUT,			"Habilitar mouse y teclado remotos." },
    { D_ENABLE_FS,				"Habilitar el acceso al sistema de archivos." },
    { D_ACCESSREJECTED,			"El ordenador remoto rechaz� su intento de acceso." },
    { D_WAITING_AUTHORIZATION,	"Esperando Autorizaci�n de la PC remota." },
    { D_SESSION_INACTIVE,		"La sesi�n se encuentra inactiva.\nPuede reconectarse a la sesi�n activa en unos segundos." },
    { D_COMPUTER_BUSY,			"El ordenador remoto est� ocupado con otra sesi�n." }
};

// LANGUAGE LANG_GREEK, SUBLANG_DEFAULT
// code_page(1253)
struct MessageStr StringsGreek[] = {
    { D_START,					"������" },
    { D_CONNECT,				"�������" },
    { D_STOP,					"����" },
    { D_YOUR_ID,				"�� ID ���" },
	{ D_CLIENT,					"�������" },
	{ D_OPERATOR,				"���������" },
    { D_CLIENT_ID_NOT_PROVIDED, "�������� �������� �� ID ��� ������" },
    { D_CLIENT_ID,				"ID/IP ������" },
    { D_PCNotFound,				"� ����������� ID=%u ��� �������" },
    { D_REMOTEPC_CLOSE,			"� �������������� ����������� ������� ��� �������" },
    { D_WARN_DIFF_VERSIONS,		"� �������������� ����������� ���� ������ v%s\nIt's ��� Ammyy Admin. ������ �� ��� ������� ���� ����������." },
    { D_ACCEPT,					"&�������" },
    { D_REJECT,					"�&�������" },
    { D_ACCEPT_CONN_TEXT,		"� ��������� ��%s ��������� ���� ���������� ���." },
    { D_REMEMBER_MY_ANSWER,		"������������� ��������� ��� ����� ��� ��������" },
    { D_ENABLE_INPUT,			"������������ �������������� ������������� ��� ���������" },
    { D_ENABLE_FS,				"������������ ��������� ��� ������" },
    { D_ACCESSREJECTED,			"� �������������� ����������� �������� �� ������" },
    { D_WAITING_AUTHORIZATION,	"������� �������� ��� ��� ������������� ����������" },
    { D_SESSION_INACTIVE,		"� ������� ����� ��������.\n �������� �� �������������� �� ���� ������������." },
    { D_COMPUTER_BUSY,			"� �������������� ����������� ����� �� ���� ������ �������." }
};

// LANGUAGE LANG_TURKISH, SUBLANG_DEFAULT
// code_page(1254)
struct MessageStr StringsTurkish[] = {
    { D_START,					"Ba�lat" },
    { D_CONNECT,				"Ba�lan" },
    { D_STOP,					"Durdur" },
    { D_YOUR_ID,				"ID'niz" },
	{ D_CLIENT,					"�stemci" },
	{ D_OPERATOR,				"Operat�r" },
    { D_CLIENT_ID_NOT_PROVIDED, "L�tfen istemci ID'sini girin" },
    { D_CLIENT_ID,				"�stemci ID'si" },
    { D_PCNotFound,				"%u ID'li bilgisayar bulunamad�." },
    { D_REMOTEPC_CLOSE,			"Uzak bilgisayar oturumu kapatt�." },
    { D_WARN_DIFF_VERSIONS,		"Uzak bilgisayar Ammyy Admin'in %s s�r�m�n� kullan�yor.\nS�r�mler farkl�, bu nedenle yaz�l�m d�zg�n �al��mayabilir!" },
    { D_ACCEPT,					"&Kabul Et" },
    { D_REJECT,					"&Reddet" },
    { D_ACCEPT_CONN_TEXT,		"%s operat�r, bilgisayar�n�za ba�lan�yor." },
    { D_REMEMBER_MY_ANSWER,		"Bu operat�r i�in cevab�m� hat�rla" },
    { D_ENABLE_INPUT,			"Uzaktan klavye ve fare y�netimini etkinle�tir" },
    { D_ENABLE_FS,				"Dosya sistemine eri�imi etkinle�tir" },
    { D_ACCESSREJECTED,			"Uzak bilgisayar eri�im iste�inizi reddetti." },
    { D_WAITING_AUTHORIZATION,	"Uzak bilgisayardan izin bekleniyor" },
    { D_SESSION_INACTIVE,		"Bu oturum etkin de�il.\nEtkin oturuma birka� saniye i�inde tekrar ba�lanabilirsiniz." },
    { D_COMPUTER_BUSY,			"Uzak bilgisayar ba�ka bir oturum ile me�gul." }
};

struct MessageStr StringsPolish[] = {
	{ D_CLIENT,		            "Klient" },
	{ D_OPERATOR,	            "Operator" },
	{ D_CONNECT,                "Po��cz" },
	{ D_EXIT,					"Wyj�cie" },
	{ D_SERVICE,				"Us�uga" },
	{ D_INSTALL,				"Zainstaluj" },
	{ D_START,					"Start" },
	{ D_STOP,					"Stop" },
	{ D_REMOVE,					"Usu�" },
	{ D_ADD,					"Dodaj" },
	{ D_EDIT,					"Edytuj" },
	{ D_SETTINGS,				"Ustawienia" },
	{ D_SETTINGS_COMMON,		"Ustawienia wsp�lne" },
	{ D_SETTINGS_NETWORK,		"Sie�" },
	{ D_ACCEPT,                 "&Akceptuj" },
	{ D_REJECT,                 "&Odzrzu�" },
	{ D_YOUR_ID,                "Twoje ID" },
	{ D_CLIENT_ID,              "ID/IP Klienta" },
	{ D_CLIENT_ID_NOT_PROVIDED, "Prosz� poda� ID klienta" },
	{ D_ACCESS_PERMISSIONS,     "Ustawienia dost�pu" },
	{ D_CONTACT_BOOK,	        "Ksi��ka adresowa" },
	{ D_REQUEST_ROUTER,			"Zapytanie o IP routera klienta" },
	{ D_WARN_FULL_SCREEN,		"Uwaga prze��czenie w tryb pe�nego ekranu" },
	{ D_LOGGING_FOR_DEBUG,		"Logowanie debugowania do pliku" },
	{ D_RUN_UNDER_SYSTEM,		"Dzia�anie na koncie klienta %S" },
	{ D_PROTECT_SETTINGS,		"Chro� przed zmian� ze zdalnej lokalizacji" },
	{ D_OFF_DESKTOP_BACKGROUND,	"Zablokuj zmiany tapety pulpitu" },
	{ D_OFF_DESKTOP_COMPOSITION,"Zablokuj zmiany kompozycji pulpitu" },
	{ D_OFF_DESKTOP_EFFECTS,    "Zablokuj efekty wizulane" },
	{ D_SHOW_HINTS,				"Pokazuj podpowiedzi" },
	{ D_PCNotFound,             "ID=%u Komputera nie zosta�o znalezione" },
	{ D_REMOTEPC_CLOSE,         "Zdalny komputer przerwa� po��czenie" },
	{ D_WARN_DIFF_VERSIONS,     "Zdalny komputer u�ywa innej wersji Ammyy Admin. v%s\n Mo�e to powodowa� nieprawid�owo�ci w dzia�aniu" },
	{ D_ACCEPT_CONN_TEXT,       "Operator o%s pr�buje nawi�za� z Tob� po��czenie" },
	{ D_REMEMBER_MY_ANSWER,     "Pami�taj moj� odpowied� dla tego operatora" },
	{ D_ENABLE_INPUT,           "Zezw�l na korzystanie ze zdealnej klawiatury i myszki" },
	{ D_ENABLE_FS,              "Zezw�l na korzystanie z managera plik�w" },
	{ D_ACCESSREJECTED,         "Zdalny komputer odm�wi� dost�pu" },
	{ D_WAITING_AUTHORIZATION,  "Oczekiwanie na autoryzacje ze zdalnego komputera" },
	{ D_SESSION_INACTIVE,       "Ta sesja jest nieaktywna.\nMo�esz si� po��czy� ponownie za kilka sekund" },
	{ D_COMPUTER_BUSY,          "Zdalny komputer obs�uguje inn� sesje" },
	{ D_ACCESS_FILES_CUR_USER,	"Dost�p do plik�w z bie��cego konta u�ytkownika" },
};


#define TABLE(x) x, sizeof(x)/sizeof(x[0])	
	
struct tagLanguages {
	UINT16 codepage;
	MessageStr* Strings;
	UINT16 count;
	LPCSTR LangName;
	LANGID LangID;	
} Languages[] = {
	{ 1252, TABLE(StringsEnglish),	  "English",		MAKELANGID(LANG_ENGLISH,	SUBLANG_ENGLISH_US) },
	{ 1252, TABLE(StringsGerman),	  "German",			MAKELANGID(LANG_GERMAN,		SUBLANG_GERMAN) },
	{ 1251, TABLE(StringsRussian),	  "Russian",		MAKELANGID(LANG_RUSSIAN,	SUBLANG_DEFAULT) },
	{ 1252, TABLE(StringsItalian),	  "Italian",		MAKELANGID(LANG_ITALIAN,	SUBLANG_ITALIAN) },
	{ 1252, TABLE(StringsSpanish),	  "Spanish",		MAKELANGID(LANG_SPANISH,	SUBLANG_SPANISH_MODERN) },
	{ 1252,	TABLE(StringsFrench),	  "French",			MAKELANGID(LANG_FRENCH,		SUBLANG_FRENCH) },
	{ 1250, TABLE(StringsPolish),  	  "Polish",			MAKELANGID(LANG_POLISH,		SUBLANG_DEFAULT) },
	{ 1252, TABLE(StringsPortuguese), "Portuguese (Br)",MAKELANGID(LANG_PORTUGUESE, SUBLANG_PORTUGUESE_BRAZILIAN) },
	{ 1253, TABLE(StringsGreek),	  "Greek",			MAKELANGID(LANG_GREEK,		SUBLANG_DEFAULT) },
	{ 1254, TABLE(StringsTurkish),	  "Turkish",		MAKELANGID(LANG_TURKISH,	SUBLANG_DEFAULT) },
	{ 1252, TABLE(StringsDutch),	  "Dutch",			MAKELANGID(LANG_DUTCH,		SUBLANG_DUTCH) },
	{ 1252, TABLE(StringsDanish),	  "Danish",			MAKELANGID(LANG_DANISH,		SUBLANG_DEFAULT) },
	{ 1250, TABLE(StringsHungarian),  "Hungarian",		MAKELANGID(LANG_HUNGARIAN,	SUBLANG_DEFAULT) },
	{ 1252, TABLE(StringsSwedish),	  "Swedish",		MAKELANGID(LANG_SWEDISH,	SUBLANG_DEFAULT) },
	{ 1252, TABLE(StringsFinnish),	  "Finnish",		MAKELANGID(LANG_FINNISH,	SUBLANG_DEFAULT) },
	{ 1252, TABLE(StringsNorwegian),  "Norwegian",		MAKELANGID(LANG_NORWEGIAN,	SUBLANG_NORWEGIAN_BOKMAL) },
};
		
#pragma pack(pop)

