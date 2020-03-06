/**********************************************
 * First 10,000 digits of pi
 *
 * Note: while 10k digits are included, there is
 * no way the button mechanics will support
 * entering this many digits in a 3 minute period.
 *
 * The actual max will be much less, but is highly
 * dependent on the robot hardware and software.
 **********************************************/

PROGMEM const char pi[] = "\
31415926535897932384626433832795028841971693993751\
05820974944592307816406286208998628034825342117067\
98214808651328230664709384460955058223172535940812\
84811174502841027019385211055596446229489549303819\
64428810975665933446128475648233786783165271201909\
14564856692346034861045432664821339360726024914127\
37245870066063155881748815209209628292540917153643\
67892590360011330530548820466521384146951941511609\
43305727036575959195309218611738193261179310511854\
80744623799627495673518857527248912279381830119491\
29833673362440656643086021394946395224737190702179\
86094370277053921717629317675238467481846766940513\
20005681271452635608277857713427577896091736371787\
21468440901224953430146549585371050792279689258923\
54201995611212902196086403441815981362977477130996\
05187072113499999983729780499510597317328160963185\
95024459455346908302642522308253344685035261931188\
17101000313783875288658753320838142061717766914730\
35982534904287554687311595628638823537875937519577\
81857780532171226806613001927876611195909216420198\
93809525720106548586327886593615338182796823030195\
20353018529689957736225994138912497217752834791315\
15574857242454150695950829533116861727855889075098\
38175463746493931925506040092770167113900984882401\
28583616035637076601047101819429555961989467678374\
49448255379774726847104047534646208046684259069491\
29331367702898915210475216205696602405803815019351\
12533824300355876402474964732639141992726042699227\
96782354781636009341721641219924586315030286182974\
55570674983850549458858692699569092721079750930295\
53211653449872027559602364806654991198818347977535\
66369807426542527862551818417574672890977772793800\
08164706001614524919217321721477235014144197356854\
81613611573525521334757418494684385233239073941433\
34547762416862518983569485562099219222184272550254\
25688767179049460165346680498862723279178608578438\
38279679766814541009538837863609506800642251252051\
17392984896084128488626945604241965285022210661186\
30674427862203919494504712371378696095636437191728\
74677646575739624138908658326459958133904780275900\
99465764078951269468398352595709825822620522489407\
72671947826848260147699090264013639443745530506820\
34962524517493996514314298091906592509372216964615\
15709858387410597885959772975498930161753928468138\
26868386894277415599185592524595395943104997252468\
08459872736446958486538367362226260991246080512438\
84390451244136549762780797715691435997700129616089\
44169486855584840635342207222582848864815845602850\
60168427394522674676788952521385225499546667278239\
86456596116354886230577456498035593634568174324112\
51507606947945109659609402522887971089314566913686\
72287489405601015033086179286809208747609178249385\
89009714909675985261365549781893129784821682998948\
72265880485756401427047755513237964145152374623436\
45428584447952658678210511413547357395231134271661\
02135969536231442952484937187110145765403590279934\
40374200731057853906219838744780847848968332144571\
38687519435064302184531910484810053706146806749192\
78191197939952061419663428754440643745123718192179\
99839101591956181467514269123974894090718649423196\
15679452080951465502252316038819301420937621378559\
56638937787083039069792077346722182562599661501421\
50306803844773454920260541466592520149744285073251\
86660021324340881907104863317346496514539057962685\
61005508106658796998163574736384052571459102897064\
14011097120628043903975951567715770042033786993600\
72305587631763594218731251471205329281918261861258\
67321579198414848829164470609575270695722091756711\
67229109816909152801735067127485832228718352093539\
65725121083579151369882091444210067510334671103141\
26711136990865851639831501970165151168517143765761\
83515565088490998985998238734552833163550764791853\
58932261854896321329330898570642046752590709154814\
16549859461637180270981994309924488957571282890592\
32332609729971208443357326548938239119325974636673\
05836041428138830320382490375898524374417029132765\
61809377344403070746921120191302033038019762110110\
04492932151608424448596376698389522868478312355265\
82131449576857262433441893039686426243410773226978\
02807318915441101044682325271620105265227211166039\
66655730925471105578537634668206531098965269186205\
64769312570586356620185581007293606598764861179104\
53348850346113657686753249441668039626579787718556\
08455296541266540853061434443185867697514566140680\
07002378776591344017127494704205622305389945613140\
71127000407854733269939081454664645880797270826683\
06343285878569830523580893306575740679545716377525\
42021149557615814002501262285941302164715509792592\
30990796547376125517656751357517829666454779174501\
12996148903046399471329621073404375189573596145890\
19389713111790429782856475032031986915140287080859\
90480109412147221317947647772622414254854540332157\
18530614228813758504306332175182979866223717215916\
07716692547487389866549494501146540628433663937900\
39769265672146385306736096571209180763832716641627\
48888007869256029022847210403172118608204190004229\
66171196377921337575114959501566049631862947265473\
64252308177036751590673502350728354056704038674351\
36222247715891504953098444893330963408780769325993\
97805419341447377441842631298608099888687413260472\
15695162396586457302163159819319516735381297416772\
94786724229246543668009806769282382806899640048243\
54037014163149658979409243237896907069779422362508\
22168895738379862300159377647165122893578601588161\
75578297352334460428151262720373431465319777741603\
19906655418763979293344195215413418994854447345673\
83162499341913181480927777103863877343177207545654\
53220777092120190516609628049092636019759882816133\
23166636528619326686336062735676303544776280350450\
77723554710585954870279081435624014517180624643626\
79456127531813407833033625423278394497538243720583\
53114771199260638133467768796959703098339130771098\
70408591337464144282277263465947047458784778720192\
77152807317679077071572134447306057007334924369311\
38350493163128404251219256517980694113528013147013\
04781643788518529092854520116583934196562134914341\
59562586586557055269049652098580338507224264829397\
28584783163057777560688876446248246857926039535277\
34803048029005876075825104747091643961362676044925\
62742042083208566119062545433721315359584506877246\
02901618766795240616342522577195429162991930645537\
79914037340432875262888963995879475729174642635745\
52540790914513571113694109119393251910760208252026\
18798531887705842972591677813149699009019211697173\
72784768472686084900337702424291651300500516832336\
43503895170298939223345172201381280696501178440874\
51960121228599371623130171144484640903890644954440\
06198690754851602632750529834918740786680881833851\
02283345085048608250393021332197155184306354550076\
68282949304137765527939751754613953984683393638304\
74611996653858153842056853386218672523340283087112\
32827892125077126294632295639898989358211674562701\
02183564622013496715188190973038119800497340723961\
03685406643193950979019069963955245300545058068550\
19567302292191393391856803449039820595510022635353\
61920419947455385938102343955449597783779023742161\
72711172364343543947822181852862408514006660443325\
88856986705431547069657474585503323233421073015459\
40516553790686627333799585115625784322988273723198\
98757141595781119635833005940873068121602876496286\
74460477464915995054973742562690104903778198683593\
81465741268049256487985561453723478673303904688383\
43634655379498641927056387293174872332083760112302\
99113679386270894387993620162951541337142489283072\
20126901475466847653576164773794675200490757155527\
81965362132392640616013635815590742202020318727760\
52772190055614842555187925303435139844253223415762\
33610642506390497500865627109535919465897514131034\
82276930624743536325691607815478181152843667957061\
10861533150445212747392454494542368288606134084148\
63776700961207151249140430272538607648236341433462\
35189757664521641376796903149501910857598442391986\
29164219399490723623464684411739403265918404437805\
13338945257423995082965912285085558215725031071257\
01266830240292952522011872676756220415420516184163\
48475651699981161410100299607838690929160302884002\
69104140792886215078424516709087000699282120660418\
37180653556725253256753286129104248776182582976515\
79598470356222629348600341587229805349896502262917\
48788202734209222245339856264766914905562842503912\
75771028402799806636582548892648802545661017296702\
66407655904290994568150652653053718294127033693137\
85178609040708667114965583434347693385781711386455\
87367812301458768712660348913909562009939361031029\
16161528813843790990423174733639480457593149314052\
97634757481193567091101377517210080315590248530906\
69203767192203322909433467685142214477379393751703\
44366199104033751117354719185504644902636551281622\
88244625759163330391072253837421821408835086573917\
71509682887478265699599574490661758344137522397096\
83408005355984917541738188399944697486762655165827\
65848358845314277568790029095170283529716344562129\
64043523117600665101241200659755851276178583829204\
19748442360800719304576189323492292796501987518721\
27267507981255470958904556357921221033346697499235\
63025494780249011419521238281530911407907386025152\
27429958180724716259166854513331239480494707911915\
32673430282441860414263639548000448002670496248201\
79289647669758318327131425170296923488962766844032\
32609275249603579964692565049368183609003238092934\
59588970695365349406034021665443755890045632882250\
54525564056448246515187547119621844396582533754388\
56909411303150952617937800297412076651479394259029\
89695946995565761218656196733786236256125216320862\
86922210327488921865436480229678070576561514463204\
69279068212073883778142335628236089632080682224680\
12248261177185896381409183903673672220888321513755\
60037279839400415297002878307667094447456013455641\
72543709069793961225714298946715435784687886144458\
12314593571984922528471605049221242470141214780573\
45510500801908699603302763478708108175450119307141\
22339086639383395294257869050764310063835198343893\
41596131854347546495569781038293097164651438407007\
07360411237359984345225161050702705623526601276484\
83084076118301305279320542746286540360367453286510\
57065874882256981579367897669742205750596834408697\
35020141020672358502007245225632651341055924019027\
42162484391403599895353945909440704691209140938700\
12645600162374288021092764579310657922955249887275\
84610126483699989225695968815920560010165525637567\
";

