#include <iostream>
#include <vector>
#include "Pokemon.h"
#include "randomNumber.h"
#include "Trainer.h"

using namespace std;

int main()
{
	std::vector<Pokemon> allPokemons = {  // j'ai laissé le std car sans c'est cassé ???? je sais pas pourquoi

	  {"Bulbizarre", "Il porte une graine sur son dos qui pousse en une grande plante.", Grass, 45.0, 49.0},
	  {"Herbizarre", "Quand il évolue, la plante sur son dos devient une grande fleur.", Grass, 60.0, 62.0},
	  {"Florizarre", "La plante sur son dos fleurit en une énorme fleur lorsqu'il atteint sa forme finale.", Grass, 80.0, 82.0},
	  {"Salamèche", "Il a une flamme constante sur sa queue. Si la flamme s'éteint, il meurt.", Fire, 39.0, 52.0},
	  {"Reptincel", "Sa queue brûle plus intensément à mesure qu'il évolue. Il devient plus féroce et plus fort.", Fire, 58.0, 64.0},
	  {"Dracaufeu", "Il peut voler à des altitudes incroyables. Sa flamme devient bleue et brûle plus chaudement.", Fire, 78.0, 84.0},
	  {"Carapuce", "Il tire de l'eau de sa bouche avec une grande force. Très mignon, il devient puissant en évoluant.", Water, 44.0, 48.0},
	  {"Carabaffe", "La queue de Carabaffe est longue et enveloppée de poils. Ses pattes palmées le rendent rapide dans l'eau.", Water, 59.0, 63.0},
	  {"Tortank", "Ses canons à eau sont si puissants qu'ils peuvent perforer un acier épais.", Water, 79.0, 83.0},
	  {"Chenipan", "Il aime manger des feuilles. Si vous le touchez délicatement, il roule en boule pour se protéger.", Bug, 45.0, 30.0},
	  {"Chrysacier", "Il endure la faim sans bouger d'un pouce. Il se durcit progressivement pour évoluer.", Bug, 50.0, 20.0},
	  {"Papilusion", "Il a des ailes colorées aux motifs hypnotiques. Ses écailles repoussent la poussière toxique.", Bug, 60.0, 45.0},
	  {"Aspicot", "Il se cache sous terre la journée pour éviter la chaleur. Il s'agite la nuit pour attraper sa proie.", Poison, 40.0, 35.0},
	  {"Coconfort", "Il évolue en libérant des gaz toxiques. Il ne peut pas bouger tant qu'il est dans cette enveloppe.", Poison, 45.0, 25.0},
	  {"Dardargnan", "Il possède un dard venimeux. Il vole rapidement pour piquer sa proie avant de s'en nourrir.", Bug, 65.0, 90.0},
	  {"Roucool", "Il vole sans discontinuer, même la nuit, pour chasser ses proies. Très commun.", Normal, 40.0, 45.0},
	  {"Roucoups", "Ses serres sont assez puissantes pour écraser des objets. Il devient très territorial en évoluant.", Normal, 55.0, 60.0},
	  {"Roucarnage", "Il peut voler à des altitudes extrêmement élevées. Très intelligent, il est difficile à apprivoiser.", Normal, 80.0, 80.0},
	  {"Rattata", "Il mord tout ce qui se trouve sur son passage. Sa dentition pousse rapidement.", Normal, 30.0, 56.0},
	  {"Rattatac", "Il vit dans des terriers creusés par d'autres Pokémon. Il est très actif la nuit.", Normal, 55.0, 81.0},
	  {"Piafabec", "Il est connu pour sa voix perçante. Il communique avec ses semblables par des cris.", Normal, 40.0, 60.0},
	  {"Rapasdepic", "Ses serres puissantes peuvent causer des blessures graves. Il vole avec élégance dans le ciel.", Normal, 65.0, 90.0},
	  {"Abo", "Il se love autour de sa proie pour l'immobiliser avant de l'attaquer. Il est très vénéneux.", Poison, 35.0, 60.0},
	  {"Arbok", "Il a la capacité de dilater son cou pour intimider ses ennemis. Il peut cracher du venin.", Poison, 60.0, 85.0},
	  {"Pikachu", "Il stocke de l'électricité dans ses joues. Si on le provoque, il peut libérer une décharge.", Electric, 35.0, 55.0},
	  {"Raichu", "Il peut générer de puissantes décharges électriques. Son pelage brille dans le noir.", Electric, 60.0, 90.0},
	  {"Sabelette", "Il est petit mais combatif. Il se creuse un terrier pour se protéger.", Ground, 50.0, 75.0},
	  {"Sablaireau", "Il agrandit son terrier pour y vivre avec sa famille. Il est très territorial.", Ground, 75.0, 100.0},
	  {"Nidoran♀", "Il sécrète des substances toxiques pour se protéger. Il est plus calme que sa contrepartie mâle.", Poison, 55.0, 47.0},
	  {"Nidorina", "Sa corne devient plus longue et pointue en évoluant. Elle prend soin de sa progéniture.", Poison, 70.0, 62.0},
	  {"Nidoqueen", "C'est une mère protectrice. Sa peau épaisse la protège des attaques ennemies.", Poison, 90.0, 82.0},
	  {"Nidoran♂", "Il est toujours à l'affût de tout mouvement suspect. Il est plus agressif que sa contrepartie femelle.", Poison, 46.0, 57.0},
	  {"Nidorino", "Il a une corne puissante qu'il utilise pour renverser ses rivaux. Il devient plus féroce en évoluant.", Poison, 61.0, 72.0},
	  {"Nidoking", "Ses griffes sont capables de tout trancher. Il peut écraser un char d'un simple coup.", Poison, 81.0, 92.0},
	  {"Mélofée", "Il aime danser sous la lueur de la lune. Il devient timide lorsqu'il est observé.", Fairy, 70.0, 45.0},
	  {"Mélodelfe", "Sa voix est si mélodieuse qu'elle peut apaiser les esprits agités. Il aime chanter la nuit.", Fairy, 95.0, 70.0},
	  {"Goupix", "Il a six queues qui s'enflamment lorsqu'il est excité. Les légendes parlent de ses pouvoirs mystiques.", Fire, 38.0, 41.0},
	  {"Feunard", "Il peut contrôler le feu à volonté. Sa fourrure est très prisée pour la confection de manteaux.", Fire, 73.0, 76.0},
	  {"Rondoudou", "Il chante une mélodie apaisante pour endormir ses ennemis. Il a une peau élastique.", Normal, 115.0, 45.0},
	  {"Grodoudou", "Sa chanson peut apaiser même les cœurs les plus agités. Il adore chanter pour ses amis.", Normal, 140.0, 70.0},
	  {"Nosferapti", "Il se nourrit du sang de ses proies endormies. Il attaque silencieusement dans l'obscurité.", Poison, 40.0, 45.0},
	  {"Nosferalto", "Ses crocs sont très acérés. Il attaque ses proies pendant la nuit, en profitant de l'obscurité.", Poison, 75.0, 80.0},
	  {"Mystherbe", "Il dégage une odeur apaisante. Si vous marchez sur l'un d'entre eux, il libère des spores.", Grass, 45.0, 50.0},
	  {"Ortide", "Ses pétales dégagent un parfum enivrant. Il évolue en libérant un arôme encore plus puissant.", Grass, 60.0, 65.0},
	  {"Rafflesia", "Il attire ses proies en émettant une odeur putride. Son parfum est détesté de tous.", Grass, 75.0, 80.0},
	  {"Paras", "Il pousse sur le dos de son hôte. Ses spores sont utilisées dans la médecine traditionnelle.", Bug, 35.0, 70.0},
	  {"Parasect", "Les spores sur son dos libèrent une odeur soporifique. Il est souvent utilisé en aromathérapie.", Bug, 60.0, 95.0},
  {"Mimitoss", "Il sécrète une substance collante qui colle aux proies. Il aime se suspendre à l'envers.", Bug, 60.0, 55.0},
  {"Aéromite", "Il flotte silencieusement dans les airs. Sa corne est utilisée pour extraire du nectar des fleurs.", Bug, 70.0, 65.0},
  {"Taupiqueur", "Il creuse des terriers à grande vitesse. Ses griffes sont très tranchantes.", Ground, 10.0, 55.0},
  {"Triopikeur", "Il a trois têtes qui travaillent ensemble pour creuser des tunnels complexes.", Ground, 35.0, 80.0},
  {"Miaouss", "Il adore se prélasser au soleil. Il est souvent vu en train de dormir dans les coins.", Normal, 40.0, 45.0},
  {"Persian", "Sa fourrure est douce et soyeuse. Il peut hypnotiser ses proies avec son regard perçant.", Normal, 65.0, 70.0},
  {"Psykokwak", "Il est constamment étourdi. Sa nuque tourne à 180 degrés après avoir utilisé Coup d'Boule.", Water, 50.0, 52.0},
  {"Akwakwak", "Ses cris sont si puissants qu'ils peuvent causer des maux de tête. Il nage avec grâce.", Water, 80.0, 82.0},
  {"Férosinge", "Il devient extrêmement agressif lorsqu'il est en colère. Il pratique le combat libre.", Fighting, 40.0, 80.0},
  {"Colossinge", "Sa force est décuplée lorsqu'il devient en colère. Il est difficile à maîtriser.", Fighting, 65.0, 105.0},
  {"Caninos", "Il est loyau et courageux. Sa fourrure brille d'une lueur rouge sous le clair de lune.", Fire, 55.0, 70.0},
  {"Arcanin", "Il peut courir à une vitesse incroyable. Il est connu pour être le meilleur compagnon.", Fire, 90.0, 110.0},
  {"Ptitard", "Il est capable de vivre dans l'eau ou hors de l'eau. Il évolue en fonction de son environnement.", Water, 40.0, 50.0},
  {"Têtarte", "Ses pattes se sont développées pour lui permettre de nager rapidement. Il adore jouer dans l'eau.", Water, 65.0, 65.0},
  {"Tartard", "Il possède une force physique incroyable. Il peut sauter des montagnes en une seule enjambée.", Water, 90.0, 85.0},
  {"Abra", "Il dort la plupart du temps. Pour évoluer, il doit être en paix.", Psychic, 25.0, 20.0},
  {"Kadabra", "Ses pouvoirs psychiques sont si développés qu'il peut lire dans les pensées des autres.", Psychic, 40.0, 35.0},
  {"Alakazam", "Son intelligence est extrêmement élevée. Il est capable de réaliser des calculs mentaux complexes.", Psychic, 55.0, 50.0},
  {"Machoc", "Il pratique intensément pour augmenter sa force. Il évolue en Muscledragon en cas de besoin.", Fighting, 70.0, 80.0},
  {"Machopeur", "Il devient encore plus puissant et musclé en évoluant. Il est expert en arts martiaux.", Fighting, 80.0, 100.0},
  {"Mackogneur", "Il peut déplacer des montagnes d'un simple coup de poing. Il est redoutable en combat.", Fighting, 90.0, 130.0},
  {"Chétiflor", "Ses pétales libèrent un parfum soporifique. Il dort la nuit pour absorber la lumière solaire.", Grass, 50.0, 75.0},
  {"Empiflor", "Il a des pétales très tranchants qui peuvent découper un arbre en un seul coup.", Grass, 65.0, 90.0},
  {"Tentacool", "Il flotte à la surface de l'eau et capture ses proies avec ses tentacules venimeux.", Water, 40.0, 40.0},
  {"Tentacruel", "Il possède des tentacules encore plus puissants en évoluant. Ils sont capables de déchirer des rochers.", Water, 80.0, 70.0},
  {"Racaillou", "Il a une peau extrêmement dure. Il évolue en Gravalanch en absorbant les nutriments du sol.", Rock, 40.0, 80.0},
  {"Gravalanch", "Il roule sur ses ennemis pour les écraser. Il évolue en Grolem en absorbant l'énergie géothermique.", Rock, 55.0, 95.0},
  {"Grolem", "Son corps est fait de roche. Il peut vivre pendant des millénaires.", Rock, 80.0, 120.0},
  {"Ponyta", "Il court à une vitesse incroyable. Sa crinière s'embrase lorsqu'il est excité.", Fire, 50.0, 85.0},
   {"Galopa", "Il possède une crinière qui brille à la lumière du clair de lune. Il est très gracieux.", Fire, 65.0, 100.0},
  {"Ramoloss", "Il flotte à la surface de l'eau sans bouger. Il évolue en Leveinard après avoir absorbé suffisamment d'eau.", Water, 90.0, 65.0},
  {"Flagadoss", "Il est très difficile à énerver. Ses grands yeux hypnotisent souvent ses adversaires.", Water, 95.0, 75.0},
  {"Magnéti", "Il est constitué de trois aimants. Il évolue en Magnéton lorsqu'il en rencontre d'autres.", Electric, 25.0, 35.0},
  {"Magnéton", "Trois Magnéti fusionnent pour former cet ensemble. Leurs champs magnétiques sont très puissants.", Electric, 50.0, 60.0},
  {"Canarticho", "Il utilise sa longue tige pour pêcher des insectes. Sa fureur est redoutable en combat.", Normal, 52.0, 65.0},
  {"Doduo", "Il court à une vitesse incroyable grâce à ses deux têtes. Il est assez maladroit en vol.", Normal, 35.0, 85.0},
  {"Dodrio", "Ses trois têtes permettent une vision à 360 degrés. Il peut courir à des vitesses impressionnantes.", Normal, 60.0, 110.0},
  {"Otaria", "Il aime jouer sur la banquise. Ses nageoires lui permettent de nager à grande vitesse.", Ice, 65.0, 45.0},
  {"Lamantine", "Il se love sur des icebergs pour se reposer. Il peut créer des aurores boréales en nageant.", Ice, 90.0, 70.0},
  {"Tadmorv", "Il émet une odeur nauséabonde pour éloigner les prédateurs. Il évolue en Grotadmorv après avoir atteint une certaine taille.", Poison, 80.0, 80.0},
  {"Grotadmorv", "Il est recouvert de déchets toxiques. Il peut détruire l'écosystème environnant.", Poison, 105.0, 105.0},
  {"Kokiyas", "Sa coquille est très résistante. Il évolue en Crustabri après avoir grandi.", Water, 30.0, 65.0},
  {"Crustabri", "Sa coquille est impénétrable. Il peut résister à des attaques très puissantes.", Water, 50.0, 95.0},
  {"Fantominus", "Il se déplace silencieusement et se cache dans l'ombre. Il évolue en Spectrum lorsqu'il est touché par un rayon lunaire.", Ghost, 30.0, 35.0},
  {"Spectrum", "Il effraie ses proies en prenant la forme de leurs pires cauchemars. Il évolue en Ectoplasma après avoir consommé suffisamment d'énergie psychique.", Ghost, 45.0, 50.0},
  {"Ectoplasma", "Il peut passer à travers les murs. Sa silhouette lumineuse hante souvent les vieilles maisons.", Ghost, 60.0, 65.0},
  {"Onix", "Il vit dans les souterrains où il creuse des tunnels. Il est extrêmement résistant.", Rock, 35.0, 45.0},
  {"Soporifik", "Il utilise des ondes alpha pour plonger ses ennemis dans un profond sommeil.", Psychic, 60.0, 48.0},
  {"Hypnomade", "Il utilise l'hypnose pour endormir ses proies. Il est souvent vu près des lacs.", Psychic, 85.0, 73.0},
  {"Krabby", "Il a une pince très puissante. Il évolue en Krabboss après avoir grandi.", Water, 30.0, 105.0},
  {"Krabboss", "Il peut broyer des rochers avec ses pinces. Sa carapace est extrêmement résistante.", Water, 55.0, 130.0},
  {"Voltorbe", "Il stocke de l'électricité dans son corps. Il explose si on le touche.", Electric, 40.0, 30.0},
  {"Électrode", "Il peut générer d'énormes explosions en libérant soudainement son électricité stockée.", Electric, 60.0, 50.0},
  {"Noeunoeuf", "Il communique avec ses semblables en chantant des mélodies. Il évolue en Noadkoko sous un climat tropical.", Grass, 60.0, 40.0},
  {"Noadkoko", "Il est extrêmement territorial. Son regard perçant peut effrayer même les dresseurs les plus aguerris.", Grass, 95.0, 85.0},
  {"Osselait", "Il porte le crâne de sa mère. Il évolue en Ossatueur lorsqu'il devient assez fort.", Ground, 50.0, 50.0},
  {"Ossatueur", "Il manie son os avec agilité. Il est souvent vu dansant pour honorer ses ancêtres.", Ground, 60.0, 80.0},
  {"Kicklee", "Il excelle dans les arts martiaux. Ses coups de pied sont d'une précision redoutable.", Fighting, 50.0, 120.0},
	  { "Tygnon", "Il possède une force incroyable. Il est capable de soulever des objets extrêmement lourds.", Fighting, 50.0, 105.0 },
	  { "Excelangue", "Il utilise sa longue langue pour attraper des proies hors de portée. Elle est collante et extensible.", Normal, 90.0, 55.0 },
	  { "Smogo", "Il émet des gaz toxiques. Il évolue en Smogogo en absorbant des substances toxiques.", Poison, 40.0, 65.0 },
	  { "Smogogo", "Il crache des gaz toxiques qui contaminent l'air. Il est souvent vu près des usines.", Poison, 65.0, 90.0 },
	  { "Rhinocorne", "Il charge avec sa corne puissante. Sa peau épaisse le protège des attaques.", Ground, 80.0, 85.0 },
	  { "Rhinoféros", "Sa corne peut percer un mur d'acier. Il est connu pour être très territorial.", Ground, 105.0, 100.0 },
	  { "Leveinard", "Il a un grand cœur et prend soin des blessés. Il évolue en Chansey lorsqu'il est très heureux.", Normal, 250.0, 5.0 },
	  { "Saquedeneu", "Il protège ses proies en utilisant ses lianes. Il évolue en Florizarre après avoir atteint une certaine maturité.", Grass, 60.0, 95.0 },
	  { "Kangourex", "Il protège férocement ses petits. Il peut sauter des distances incroyables.", Normal, 105.0, 95.0 },
	  { "Hypotrempe", "Il flotte à la surface de l'eau en agitant son petit filament. Il évolue en Hypocéan en cas de besoin.", Water, 30.0, 40.0 },
	  { "Hypocéan", "Il évolue en absorbant l'énergie des vagues et des courants marins. Il peut devenir très puissant.", Water, 65.0, 80.0 },
	  { "Poissirène", "Il chante des mélodies envoûtantes pour attirer ses proies. Il évolue en Poissoroy sous la pleine lune.", Water, 95.0, 60.0 },
	  { "Poissoroy", "Il peut hypnotiser ses ennemis en dansant gracieusement. Sa beauté est légendaire.", Water, 130.0, 85.0 },
	  { "Stari", "Il peut régénérer ses membres perdus. Il évolue en Staross après avoir atteint une certaine taille.", Water, 30.0, 45.0 },
	  { "Staross", "Il contrôle les ondes cérébrales de ses ennemis. Il est vénéré comme une créature sacrée.", Water, 60.0, 75.0 },
	  { "M. Mime", "Il crée des barrières invisibles en utilisant ses pouvoirs psychiques. Il adore se produire devant un public.", Psychic, 40.0, 45.0 },
	  { "Insécateur", "Il utilise ses puissantes pinces pour couper les branches des arbres. Il est très agile en vol.", Bug, 70.0, 110.0 },
	  { "Lippoutou", "Il a la capacité de donner vie à des objets inanimés en les embrassant. Il est très affectueux.", Ice, 110.0, 65.0 },
	  { "Élektek", "Il peut générer des éclairs en agitant ses bras. Ses décharges électriques sont très puissantes.", Electric, 65.0, 65.0 },
	  { "Magmar", "Il crache des flammes brûlantes. Sa température corporelle est extrêmement élevée.", Fire, 65.0, 95.0 },
	  { "Scarabrute", "Il porte une carapace très dure. Il évolue en Scarhino après avoir survécu à de nombreuses batailles.", Bug, 70.0, 75.0 },
	  { "Tauros", "Il est extrêmement territorial. Il charge quiconque s'approche de son territoire.", Normal, 75.0, 100.0 },
	  { "Magicarpe", "Il est inoffensif dans l'eau, mais il évolue en un puissant Léviator. Sa patience est légendaire.", Water, 20.0, 10.0 },
	  { "Léviator", "Il règne en maître sur les eaux. Sa force est redoutable, et il peut voler sur de longues distances.", Water, 95.0, 125.0 },
	  { "Lokhlass", "Il habite les eaux froides des régions arctiques. Sa peau est très résistante.", Water, 130.0, 85.0 },
	  { "Métamorph", "Il peut prendre l'apparence de n'importe quel Pokémon. Sa structure cellulaire est unique.", Normal, 48.0, 48.0 },
	  { "Évoli", "Il peut évoluer en plusieurs Pokémon différents en fonction de son environnement et de son amitié avec son dresseur.", Normal, 55.0, 55.0 },
	  { "Aquali", "Il évolue lorsqu'on lui donne une Pierre Eau. Il est à l'aise dans l'eau et est très agile.", Water, 130.0, 65.0 },
	  { "Voltali", "Il évolue lorsqu'on lui donne une Pierre Foudre. Il peut générer de puissantes décharges électriques.", Electric, 65.0, 65.0 },
	  { "Pyroli", "Il évolue lorsqu'on lui donne une Pierre Feu. Sa fourrure émet une chaleur intense.", Fire, 65.0, 130.0 },
	  { "Porygon", "Il est constitué de données informatiques. Il peut être modifié pour augmenter ses capacités.", Normal, 65.0, 60.0 },
	  { "Amonita", "Il a été ramené à la vie à partir d'une ancienne cellule fossilisée. Il évolue en Ammonistar.", Rock, 35.0, 70.0 },
	  { "Amonistar", "Il possède une coquille dure et robuste. Il est considéré comme une créature marine ancestrale.", Rock, 70.0, 125.0 },
	  { "Kabuto", "Il ressemble à une créature marine ancienne. Il évolue en Kabutops après une longue période.", Rock, 30.0, 80.0 },
	  { "Kabutops", "Il est capable de couper ses ennemis avec ses lames acérées. Il est un redoutable prédateur.", Rock, 60.0, 115.0 },
	  { "Ptéra", "Il dominait les cieux à l'époque préhistorique. Il évolue à partir de l'œuf d'un Léviator.", Rock, 80.0, 135.0 },
	  { "Ronflex", "Il est constamment affamé et peut manger presque n'importe quoi. Il peut dormir pendant des jours.", Normal, 160.0, 110.0 },
	  { "Artikodin", "Il contrôle la glace et peut créer une tempête de neige en battant ses ailes. Il est légendaire.", Ice, 90.0, 85.0 },
	  { "Électhor", "Il génère des éclairs puissants. Il est légendaire et est souvent associé aux tempêtes électriques.", Electric, 90.0, 90.0 },
	  { "Sulfura", "Il contrôle le feu et vit au sommet des volcans. Il est considéré comme une créature légendaire.", Fire, 90.0, 100.0 },
	  { "Minidraco", "Il est très curieux et aime mordiller des objets pour renforcer ses dents. Il évolue en Draco après avoir gagné en maturité.", Dragon, 41.0, 64.0 },
	  { "Draco", "Il peut voler à des altitudes extrêmes. Il évolue en Dracolosse après avoir atteint une taille impressionnante.", Dragon, 61.0, 84.0 },
	  { "Dracolosse", "Il est capable de voler dans les cieux sans effort. Il est considéré comme une créature majestueuse.", Dragon, 91.0, 134.0 },
	  { "Mewtwo", "Il possède une intelligence exceptionnelle. Ses pouvoirs psychiques sont parmi les plus puissants.", Psychic, 106.0, 110.0 },
	  { "Mew", "Il est dit être le Pokémon originel. Il est extrêmement rare et possède la capacité de maîtriser tous les mouvements.", Psychic, 100.0, 100.0 }
	};
	std::vector<Trainer> trainers = {
		{"Player","","",0,100,{}},
		{"Rival","","",0,100,{}},
 {"Dresseur Normal", "Smith", "La norme, mais solide !", 100, 3, {allPokemons[15], allPokemons[19], allPokemons[28]}},
	{"Dresseur Aquatique", "Jones", "Naviguons ensemble !", 120, 3, {allPokemons[40], allPokemons[53], allPokemons[68]}},
	{"Dresseur Végétal", "Williams", "Les plantes m'accompagnent !", 140, 4, {allPokemons[78], allPokemons[92], allPokemons[106], allPokemons[120]}},
	{"Dresseur Pyro", "Taylor", "Le feu qui brûle en moi !", 160, 4, {allPokemons[8], allPokemons[26], allPokemons[34], allPokemons[49]}},
	{"Dresseur Électro", "Anderson", "Une décharge d'énergie !", 180, 5, {allPokemons[85], allPokemons[97], allPokemons[110], allPokemons[123], allPokemons[137]}},
	{"Dresseur Rocheux", "Brown", "La solidité à toute épreuve !", 200, 5, {allPokemons[17], allPokemons[31], allPokemons[44], allPokemons[57], allPokemons[71]}},
	{"Dresseur Insecte", "Davis", "L'essaim toujours prêt !", 220, 6, {allPokemons[76], allPokemons[89], allPokemons[102], allPokemons[115], allPokemons[128], allPokemons[141]}},
	{"Dresseur Psy", "Miller", "L'esprit guide mes choix !", 240, 6, {allPokemons[22], allPokemons[37], allPokemons[54], allPokemons[69], allPokemons[84], allPokemons[99]}},
	{"Dresseur Aérien", "Harris", "L'envol vers la victoire !", 260, 6, {allPokemons[13], allPokemons[29], allPokemons[45], allPokemons[61], allPokemons[77], allPokemons[93]}},
	{"Dresseur Combat", "Jackson", "Le dojo est ouvert !", 280, 6, {allPokemons[6], allPokemons[21], allPokemons[37], allPokemons[52], allPokemons[67], allPokemons[82]}},
	{"Dresseur Spectral", "Cooper", "Les ombres m'obéissent !", 300, 6, {allPokemons[93], allPokemons[107], allPokemons[121], allPokemons[135], allPokemons[149], allPokemons[148]}},
	{"Dresseur Glacial", "Hill", "La glace sculpte ma destinée !", 320, 6, {allPokemons[81], allPokemons[95], allPokemons[109], allPokemons[123], allPokemons[137], allPokemons[141]}},
	{"Dresseur Dragon", "Carter", "L'âme du dragon m'habite !", 340, 6, {allPokemons[115], allPokemons[126], allPokemons[137], allPokemons[148], allPokemons[147], allPokemons[146]}},
	{"Dresseur Poison", "Ross", "Les toxines sont mon allié !", 360, 6, {allPokemons[18], allPokemons[37], allPokemons[56], allPokemons[75], allPokemons[94], allPokemons[113]}},
	{"Dresseur Ténébreux", "Baker", "L'ombre guide ma stratégie !", 380, 6, {allPokemons[43], allPokemons[62], allPokemons[81], allPokemons[100], allPokemons[119], allPokemons[138]}},

	};

	string answer;

	cout << "Bienvenue dans le monde magique des POKEMON !" << endl;
	cin.ignore();
	cout << "Je suis le Professeur Chen. Comment devrais-je t'appeler ?" << endl;

	while (answer != "oui") {
		string name = "";
		cin >> name;
		cout << "D'accord, tu t'appelle " << name << " c'est bien ca ?" << endl;
		cout << "    oui            non" << endl;
		cin >> answer;
		if (answer == "non") {
			cout << "Ah j'ai du mal entendre désolé, comment je dois t'appeler ?" << endl;
		}
		else if (answer == "oui") {
			trainers[0].SetName(name);
		};
	}
	cout << "Ok ! Ton nom est donc " << trainers[0].GetName() << " !" << endl;
	cin.ignore();
	cout << "et voici mon petit-fils." << endl;
	cin.ignore();
	cout << "Vous êtes rivaux depuis votre tendre enfance." << endl;
	cin.ignore();
	cout << "... Heu..." << endl << "C'est quoi son nom déjà ?" << endl;

	while (answer != "oui") {
		string name = "";
		cin >> name;
		cout << "Euh, c'est bien " << name << " ?" << endl;
		cout << "    oui            non" << endl;
		cin >> answer;
		if (answer == "non") {
			cout << "Ah ma mémoire me joue vraiment des tours, comment s'appelle t'il déjà ?" << endl;
		}
		else if (answer == "oui") {
			trainers[1].SetName(name);
		};
	}
	cout << "Mais oui, bien sûr que je m'en souviens, c'est " << trainers[1].GetName();
	cin.ignore();
	cout << "Aujourd'hui est un grand jour, le jour ou vous allez choisir votre premier pokemon !" << endl;
	cin.ignore();
	cout << trainers[1].GetName() << " : a toi l'honneur, mais entre nous, peu importe ton choix, sache que je te mettrai inévitablement la pâtée de toute façon !" << endl << endl;
	cin.ignore();
	cout << "En premier il y a Bulbizarre, il a une étrange graine plantée sur son dos." << endl;
	cin.ignore();
	cout << "Ensuite il y a Carapuce. Son dos durcit avec l'âge et devient une super carapace." << endl;
	cin.ignore();
	cout << "Et enfin il y a Salamèche. Il préfère les endroits chauds. En cas de pluie, de la vapeur se forme autour de sa queue." << endl;
	cin.ignore();
	cout << "Alors, quel pokémon préfèrerais-tu avoir dans ton équipe ?" << endl;
	cout << endl << "1 - Bulbizarre         2- Carapuce        3-Salamèche" << endl;
	answer = "";
	int selectedPokemon = -1;
	while (answer != "oui") {
		string confirmation;
		cin >> answer;
		if (answer == "1") {
			selectedPokemon = 0;
		}
		else if (answer == "2") {
			selectedPokemon = 6;
		}
		else {
			selectedPokemon = 3;
		}
		cout << "très bien, tu veux intégrer " << allPokemons[selectedPokemon].GetName() << " a ton équipe ?" << endl;
		cout << "    oui            non" << endl;
		cin >> answer;
		if (answer == "non") {
			cout << "Ah désolé, j'ai du mal comprendre, quel pokemon veut tu ajouter a ton équipe ?" << endl;
			cout << endl << "1 - Bulbizarre         2- Carapuce        3-Salamèche" << endl;
		}
	}
	trainers[0].AddPokemon(allPokemons[selectedPokemon]);
}