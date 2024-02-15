﻿#include "entityRef.h"

    vector<Ability> entityRef::abilitys = {
		{"",0,Normal,0},
	{"Charge", 40, Normal, 20},
	{"Ultralaser", 150, Normal, 5},
	{"Retour", 70, Normal, 50},
	{"Vive-Attaque", 50, Normal, 30},
	{"Coud'Krâne", 85, Normal, 55},
	{"Flammèche", 40, Fire, 25},
	{"Déflagration", 110, Fire, 70},
	{"Poing de Feu", 75, Fire, 40},
	{"Roue de Feu", 60, Fire, 35},
	{"Boutefeu", 120, Fire, 80},
	{"Pistolet à O", 40, Water, 25},
	{"Surf", 90, Water, 60},
	{"Canon à O", 150, Water, 100},
	{"Aqua-Queue", 80, Water, 50},
	{"Bulles d'O", 65, Water, 40},
	{"Fouet Lianes", 45, Grass, 30},
	{"Lance-Soleil", 120, Grass, 80},
	{"Tranch'Herbe", 55, Grass, 35},
	{"Bomb-Graine", 80, Grass, 50},
	{"Méga-Sangsue", 75, Grass, 45},
	{"Éclair", 40, Electric, 25},
	{"Tonnerre", 90, Electric, 60},
	{"Élecanon", 120, Electric, 80},
	{"Étincelle", 65, Electric, 40},
	{"Poing-Éclair", 75, Electric, 50},
	{"Éclats Glace", 40, Ice, 25},
	{"Blizzard", 110, Ice, 70},
	{"Rayon Glace", 95, Ice, 60},
	{"Avalanche", 80, Ice, 50},
	{"Carapace Glace", 50, Ice, 30},
	{"Poing-Karaté", 50, Fighting, 35},
	{"Dynamopoing", 100, Fighting, 65},
	{"Balayage", 55, Fighting, 40},
	{"Casse-Brique", 75, Fighting, 50},
	{"Mach Punch", 40, Fighting, 30},
	{"Dard-Venin", 35, Poison, 20},
	{"Bomb-Beurk", 80, Poison, 55},
	{"Toxik", 90, Poison, 60},
	{"Piège de Venin", 70, Poison, 45},
	{"Détricanon", 120, Poison, 80},
	{"Séisme", 100, Ground, 70},
	{"Tunnel", 80, Ground, 50},
	{"Coud'Boue", 55, Ground, 35},
	{"Piétisol", 65, Ground, 40},
	{"Tourbi-Sable", 35, Ground, 25},
	{"Picpic", 35, Flying, 20},
	{"Aéropique", 60, Flying, 40},
	{"Vol", 90, Flying, 55},
	{"Piqué", 120, Flying, 80},
	{"Tranch'Air", 75, Flying, 50},
	{"Choc Mental", 50, Psychic, 30},
	{"Psyko", 90, Psychic, 60},
	{"Prescience", 120, Psychic, 80},
	{"Dard-Nuée", 40, Bug, 25},
	{"Bourdon", 90, Bug, 60},
	{"Bourdon Fatal", 120, Bug, 80},
	{"Piqûre", 65, Bug, 40},
	{"Lame d'Air", 75, Bug, 50},
	{"Jet-Pierres", 50, Rock, 30},
	{"Lame de Roc", 100, Rock, 65},
	{"Éboulement", 110, Rock, 70},
	{"Exploforce", 120, Rock, 80},
	{"Tomberoche", 80, Rock, 50},
	{"Ball'Ombre", 80, Ghost, 55},
	{"Ombre Nocturne", 55, Ghost, 40},
	{"Maléfice", 90, Ghost, 60},
	{"Saisie Spectrale", 120, Ghost, 80},
	{"Vent Mauvais", 65, Ghost, 45},
	 {"Colère", 120, Dragon, 80},
	{"Dracogriffe", 80, Dragon, 50},
	{"Éclat Magique", 75, Dragon, 45},
	{"Dracochoc", 90, Dragon, 60},
	{"Lance-Flamme", 110, Dragon, 70},
	{"Tranche-Nuit", 70, Dark, 45},
	{"Crocs Éclair", 65, Dark, 40},
	{"Morsure", 60, Dark, 35},
	{"Ball'Ombre", 80, Dark, 55},
	{"Poursuite", 40, Dark, 30},
	{"Tête de Fer", 80, Steel, 55},
	{"Lame de Roc", 100, Steel, 70},
	{"Coup d'Boule", 70, Steel, 45},
	{"Griffe Acier", 50, Steel, 30},
	{"Plaie-Croix", 80, Steel, 50},
	{"Éclat Magique", 75, Fairy, 45 },
	{"Métronome", 0, Fairy, 20},
	{"Dernier Recours", 140, Fairy, 90},
	{"Choc Féerique", 65, Fairy, 40},
	{"Vibra Soin", 0, Fairy, 30},
};
	vector<Pokemon> entityRef::allPokemons = {
 {"Bulbizarre", "Il porte une graine sur le dos depuis sa naissance. En grandissant, la graine devient de plus en plus grosse.", Grass, 1, 50, abilitys[16], abilitys[1]},
{"Herbizarre", "Herbizarre émet un parfum très doux lorsqu'il est sur le point de fleurir. La fleur se développe lorsqu'il atteint la maturité.", Grass, 2, 65, abilitys[16], abilitys[15]},
{"Florizarre", "La plante sur le dos de Florizarre prend une couleur vive et émet une odeur très agréable quand il est en pleine santé.", Grass, 3, 80, abilitys[16], abilitys[38]},
{"Salameche", "La flamme qui brûle au bout de sa queue indique son état émotionnel. Elle brûle plus fort quand il est excité.", Fire, 1, 45, abilitys[5], abilitys[9]},
{"Reptincel", "Reptincel a une flamme beaucoup plus forte que Salameche. Elle brûle si intensément qu'il peut chauffer ses environs.", Fire, 2, 60, abilitys[5], abilitys[36]},
{"Dracaufeu", "Dracaufeu a des ailes qui brillent dans le noir. Il est fier de ces ailes magnifiques et les utilise pour voler majestueusement dans le ciel.", Fire, 3, 78, abilitys[5], abilitys[32]},
{"Carapuce", "Le dos de Carapuce est un peu dur. Quand il est menacé, il se retire à l'intérieur de sa carapace pour se protéger.", Water, 1, 50, abilitys[10], abilitys[12]},
{"Carabaffe", "Carabaffe a une coquille très solide qui devient plus résistante à mesure qu'il évolue. Elle lui offre une excellente protection.", Water, 2, 65, abilitys[10], abilitys[11]},
{"Tortank", "Tortank peut pulvériser de l'eau à haute pression avec une force telle qu'il peut facilement renverser de grands bâtiments.", Water, 3, 80, abilitys[10], abilitys[37]},
{"Pikachu", "Il possède une petite poche dans ses joues où il stocke de l'électricité. Il la libère en cas de danger.", Electric, 2, 60, abilitys[21], abilitys[3]},
{"Raichu", "La queue de Raichu génère une charge électrique puissante. Il peut parfois donner des chocs à des objets en touchant simplement la queue.", Electric, 3, 75, abilitys[21], abilitys[2]},
{"Sabelette", "Sabelette creuse un terrier pour vivre. Si le terrier est menacé, il s'enfuit à une vitesse incroyable.", Ground, 1, 50, abilitys[40], abilitys[41]},
{"Sablaireau", "Sablaireau est capable de creuser des tunnels de plusieurs kilomètres en une seule nuit. Il est très territorial.", Ground, 2, 60, abilitys[40], abilitys[19]},
{"Nidoran♀", "Nidoran♀ a un sens aigu de l'odorat. Il peut détecter des odeurs faibles et repérer ses proies à distance.", Poison, 1, 55, abilitys[29], abilitys[42]},
{"Nidorina", "L'odorat de Nidorina est encore plus développé que celui de Nidoran♀. Elle utilise son sens de l'odorat pour communiquer avec d'autres Pokémon.", Poison, 2, 70, abilitys[29], abilitys[43]},
{"Nidoqueen", "Nidoqueen est très protecteur envers ses petits. Il peut devenir agressif s'il pense que sa progéniture est en danger.", Poison, 3, 90, abilitys[29], abilitys[7]},
{"Nidoran♂", "Nidoran♂ a une corne venimeuse sur sa tête. Il utilise cette corne pour se défendre contre les prédateurs.", Poison, 1, 46, abilitys[37], abilitys[42]},
{"Nidorino", "La corne de Nidorino devient plus grande et plus aiguisée à mesure qu'il évolue. Il utilise sa corne pour combattre d'autres mâles.", Poison, 2, 61, abilitys[37], abilitys[43]},
{"Nidoking", "Nidoking possède une force physique incroyable. Il peut détruire un bâtiment en utilisant seulement sa puissance musculaire.", Poison, 3, 81, abilitys[37], abilitys[7]},
{"Mélofée", "Les œufs de Mélofée ont une grande valeur car ils sont considérés comme des joyaux. Il est très rare d'en trouver un.", Normal, 1, 70, abilitys[53], abilitys[54]},
{"Mélodelfe", "Mélodelfe peut guérir les blessures avec son chant. Il a un timbre de voix magique qui apaise même les cœurs les plus agités.", Normal, 2, 95, abilitys[53], abilitys[55]},
{"Goupix", "Goupix a une fourrure qui brûle d'un rouge vif. En hiver, sa fourrure devient plus épaisse pour le protéger du froid.", Fire, 1, 38, abilitys[6], abilitys[9]},
{"Feunard", "Feunard est connu pour sa ruse et son intelligence. Il est capable de manipuler le feu et de l'utiliser à des fins offensives.", Fire, 2, 73, abilitys[6], abilitys[22]},
{"Rondoudou", "Les ondes qu'il émet sont si apaisantes qu'elles endorment les personnes et les Pokémon qui les entendent.", Normal, 1, 55, abilitys[49], abilitys[57]},
{"Grodoudou", "Grodoudou peut contrôler les émotions des gens en faisant vibrer ses ondes vocales. Il utilise cette capacité pour apaiser les conflits.", Normal, 2, 140, abilitys[49], abilitys[57]},
{"Nosferapti", "Nosferapti se nourrit du sang des autres Pokémon. Il se cache dans l'obscurité et utilise ses ailes silencieuses pour approcher sa proie.", Poison, 1, 40, abilitys[60], abilitys[61]},
{"Nosferalto", "Nosferalto évolue grâce à l'influence de la Lune. Il devient plus actif la nuit et recherche activement des proies.", Poison, 2, 75, abilitys[60], abilitys[62]},
{"Mystherbe", "Mystherbe émet une odeur enivrante qui endort ceux qui la respirent. Il utilise cette capacité pour échapper à ses ennemis.", Grass, 1, 45, abilitys[15], abilitys[27]},
{"Ortide", "Ortide est capable de détecter les émotions des autres Pokémon grâce à son antenne. Il peut communiquer sans utiliser de cris.", Grass, 2, 60, abilitys[15], abilitys[14]},
{"Rafflesia", "Rafflesia libère une odeur nauséabonde pour repousser les ennemis. Cette odeur est si forte qu'elle peut rendre les Pokémon adverses malades.", Grass, 3, 75, abilitys[15], abilitys[27]},
{"Paras", "Paras possède des champignons sur son dos qui poussent en symbiose avec lui. Les champignons deviennent plus gros lorsqu'il évolue.", Bug, 1, 35, abilitys[62], abilitys[31]},
{"Parasect", "Parasect est contrôlé par le champignon sur son dos. Il agit instinctivement et suit les ordres du champignon.", Bug, 2, 60, abilitys[62], abilitys[30]},
{"Mimitoss", "Mimitoss libère des spores toxiques dans l'air pour repousser les ennemis. Il peut également hypnotiser les proies avec ses yeux.", Bug, 1, 60, abilitys[51], abilitys[30]},
{"Aéromite", "Aéromite a des ailes très petites qui ne lui permettent pas de voler. Il saute de branche en branche pour se déplacer.", Bug, 2, 90, abilitys[51], abilitys[32]},
{"Taupiqueur", "Taupiqueur aime creuser des tunnels. Il peut creuser jusqu'à 60 km en une journée pour chercher de la nourriture.", Ground, 1, 10, abilitys[39], abilitys[29]},
{"Triopikeur", "Triopikeur possède trois griffes acérées qu'il utilise pour creuser des tunnels complexes sous terre.", Ground, 2, 35, abilitys[39], abilitys[36]},
{"Miaouss", "Il adore collectionner des objets brillants. Si quelque chose brille, il ne peut s'empêcher de le voler.", Normal, 1, 40, abilitys[50], abilitys[58]},
{"Persian", "Persian a une fourrure douce et soyeuse qui est très prisée. Il peut se faufiler silencieusement pour surprendre ses proies.", Normal, 2, 65, abilitys[50], abilitys[58]},
{"Psykokwak", "Les pouvoirs psychiques de Psykokwak s'améliorent à mesure qu'il grandit. Il utilise des ondes cérébrales pour nager.", Water, 1, 50, abilitys[23], abilitys[14]},
{"Akwakwak", "Akwakwak est capable de créer des tourbillons dans l'eau en agitant sa queue. Il utilise cette technique pour capturer ses proies.", Water, 2, 80, abilitys[23], abilitys[1]},
{"Ferosinge", "Il peut lancer plus de 500 coups de poing par minute. Toutefois, il devient confus s'il manque sa cible.", Fighting, 1, 55, abilitys[33], abilitys[41]},
{"Colossinge", "Colossinge devient très agressif lorsqu'il est en colère. Il est extrêmement puissant et peut renverser de grands obstacles.", Fighting, 2, 80, abilitys[33], abilitys[4]},
{"Caninos", "Caninos est très fidèle à son dresseur. Il protège son maître avec loyauté et est prêt à affronter n'importe quel danger.", Fire, 1, 55, abilitys[3], abilitys[10]},
{"Arcanin", "Arcanin est réputé pour sa vitesse et sa puissance. Il est capable de parcourir de longues distances à une vitesse incroyable.", Fire, 2, 90, abilitys[3], abilitys[37]},
{"Ptitard", "Ptitard peut vivre dans n'importe quel type d'eau, même celle qui est très sale. Il mute pour s'adapter à son environnement.", Water, 1, 40, abilitys[38], abilitys[11]},
{"Têtarte", "Têtarte possède de puissantes pattes qui lui permettent de nager rapidement. Il peut sauter de l'eau pour attraper des proies.", Water, 2, 65, abilitys[38], abilitys[24]},
{"Tartard", "Tartard est capable de nager à une vitesse incroyable. Il peut parcourir de longues distances en un temps record.", Water, 3, 90, abilitys[38], abilitys[37]},
{"Abra", "Abra dort pendant la majorité de la journée. Il est capable de se téléporter instantanément pour échapper aux prédateurs.", Psychic, 1, 25, abilitys[43], abilitys[22]},
{"Kadabra", "Kadabra possède un pouvoir télépathique très fort. Il peut lire les pensées des autres et même prédire l'avenir.", Psychic, 2, 40, abilitys[43], abilitys[30]},
{"Alakazam", "Alakazam a un QI extrêmement élevé. Ses pouvoirs psychiques sont si forts qu'il peut plier une cuillère avec son esprit.", Psychic, 3, 55, abilitys[43], abilitys[50]},
{"Machoc", "Machoc est un Pokémon très fort qui aime s'entraîner. Il devient encore plus puissant à mesure qu'il évolue.", Fighting, 1, 70, abilitys[5], abilitys[49]},
{"Machopeur", "Machopeur a des muscles très développés qui lui confèrent une force incroyable. Il peut soulever des objets très lourds.", Fighting, 2, 80, abilitys[5], abilitys[32]},
{"Mackogneur", "Mackogneur est un expert en arts martiaux. Il peut lancer des coups de poing si rapidement qu'ils sont invisibles à l'œil nu.", Fighting, 3, 90, abilitys[5], abilitys[4]},
{"Chetiflor", "Chetiflor se nourrit de la sève des arbres. Il peut étirer ses bras pour atteindre les branches les plus éloignées.", Grass, 1, 45, abilitys[28], abilitys[27]},
{"Boustiflor", "Boustiflor a un odorat très développé. Il peut détecter l'odeur des proies à plusieurs kilomètres de distance.", Grass, 2, 60, abilitys[28], abilitys[11]},
{"Empiflor", "Empiflor est carnivore et se nourrit de petits Pokémon. Il attire ses proies avec son odeur sucrée avant de les dévorer.", Grass, 3, 75, abilitys[28], abilitys[7]},
{"Tentacool", "Tentacool flotte à la surface de l'eau en utilisant ses tentacules pour capturer des proies. Il peut sécréter du poison.", Water, 1, 40, abilitys[13], abilitys[14]},
{"Tentacruel", "Tentacruel est capable de nager à des profondeurs extrêmes. Ses tentacules sont très puissants et peuvent saisir des proies facilement.", Water, 2, 80, abilitys[13], abilitys[23]},
{"Racaillou", "Racaillou aime se cacher dans les grottes. Il est très territorial et peut devenir agressif s'il sent une menace.", Rock, 1, 40, abilitys[47], abilitys[58]},
{"Gravalanch", "Gravalanch est très robuste et peut résister à de puissantes attaques. Il peut rouler à grande vitesse pour écraser ses ennemis.", Rock, 2, 55, abilitys[47], abilitys[57]},
{"Grolem", "Grolem est le stade final de l'évolution de Racaillou. Il est extrêmement puissant et peut soulever des rochers énormes.", Rock, 3, 80, abilitys[47], abilitys[58]},
{"Ponyta", "Ponyta a une crinière de feu qui brille d'une lumière éblouissante. Il court à des vitesses incroyables.", Fire, 1, 50, abilitys[3], abilitys[9]},
{"Galopa", "Galopa est capable de courir sur l'eau avec ses sabots enflammés. Il est connu pour sa grâce et sa vitesse.", Fire, 2, 65, abilitys[3], abilitys[32]},
{"Ramoloss", "Ramoloss est lent et paresseux. Il passe la plupart de son temps à dormir au fond de l'eau pour éviter les prédateurs.", Water, 1, 90, abilitys[10], abilitys[24]},
{"Flagadoss", "Flagadoss est capable de flotter sur l'eau sans se fatiguer grâce à sa structure corporelle unique. Il est très paisible.", Water, 2, 95, abilitys[10], abilitys[2]},
{"Magnéti", "Magnéti génère un puissant champ magnétique. Il est capable d'attirer et de coller à lui des objets métalliques.", Electric, 1, 25, abilitys[22], abilitys[3]},
{"Magnéton", "Magnéton est constitué de trois Magnéti fusionnés. Il génère un champ magnétique encore plus puissant.", Electric, 2, 50, abilitys[22], abilitys[36]},
{"Canarticho", "Canarticho a une longue tige fine sur sa tête qui ressemble à une plante. Il utilise cette tige pour pêcher sa nourriture.", Normal, 1, 60, abilitys[45], abilitys[46]},
{"Doduo", "Doduo a deux têtes qui fonctionnent indépendamment l'une de l'autre. Il peut courir très rapidement pour échapper aux prédateurs.", Normal, 2, 70, abilitys[45], abilitys[55]},
{"Dodrio", "Dodrio a trois têtes qui sont capables de communiquer entre elles. Il peut attaquer plusieurs ennemis simultanément.", Normal, 3, 80, abilitys[45], abilitys[55]},
{"Otaria", "Otaria possède une couche de graisse épaisse qui lui permet de flotter dans l'eau. Il se nourrit principalement de poissons.", Water, 1, 65, abilitys[12], abilitys[23]},
{"Lamantine", "Lamantine peut nager à des vitesses incroyables en utilisant ses nageoires. Il est très agile dans l'eau.", Water, 2, 90, abilitys[12], abilitys[8]},
{"Tadmorv", "Tadmorv est constitué de déchets toxiques. Il sécrète une substance corrosive qui peut dissoudre presque tout.", Poison, 1, 80, abilitys[63], abilitys[31]},
{"Grotadmorv", "Grotadmorv est encore plus toxique que Tadmorv. Il peut émettre des gaz nocifs qui empoisonnent l'air autour de lui.", Poison, 2, 105, abilitys[63], abilitys[30]},
{"Kokiyas", "Kokiyas a une coquille très dure qui le protège des prédateurs. Il peut également se cacher dans sa coquille pour se défendre.", Water, 1, 30, abilitys[20], abilitys[36]},
{"Crustabri", "Crustabri a une coquille très solide qui est presque impossible à briser. Il peut également l'utiliser pour écraser ses ennemis.", Water, 2, 50, abilitys[20], abilitys[37]},
{"Fantominus", "Fantominus est constitué de gaz vénéneux. Il peut se faufiler à travers les fissures et les fissures pour échapper à ses ennemis.", Ghost, 1, 30, abilitys[64], abilitys[65]},
{"Spectrum", "Spectrum est attiré par les émotions négatives des gens. Il peut se rendre invisible pour échapper à la détection.", Ghost, 2, 45, abilitys[64], abilitys[66]},
{"Ectoplasma", "Ectoplasma se nourrit des rêves des gens endormis. Il peut créer des illusions pour effrayer ses ennemis.", Ghost, 3, 60, abilitys[64], abilitys[65]},
{"Onix", "Onix est un serpent de roche géant. Il peut creuser des tunnels dans le sol pour se déplacer rapidement.", Rock, 2, 35, abilitys[61], abilitys[58]},
{"Soporifik", "Soporifik libère un gaz hypnotique qui endort ses ennemis. Il peut également lire les pensées des autres.", Psychic, 1, 60, abilitys[47], abilitys[22]},
{"Hypnomade", "Hypnomade peut hypnotiser les gens en les regardant dans les yeux. Il utilise cette capacité pour échapper aux prédateurs.", Psychic, 2, 85, abilitys[47], abilitys[43]},
{"Krabby", "Krabby a une pince très puissante qu'il utilise pour attraper des proies. Il est également capable de casser des objets durs.", Water, 1, 30, abilitys[1], abilitys[37]},
{"Krabboss", "Krabboss a une pince encore plus puissante que Krabby. Il peut écraser des coquilles dures sans aucun problème.", Water, 2, 50, abilitys[1], abilitys[37]},
{"Voltorbe", "Voltorbe stocke de l'électricité dans son corps. Il peut exploser à tout moment s'il se sent menacé.", Electric, 1, 40, abilitys[3], abilitys[23]},
{"Électrode", "Électrode est très instable et peut exploser à la moindre perturbation. Il peut libérer une grande quantité d'énergie en une seule explosion.", Electric, 2, 60, abilitys[3], abilitys[37]},
{"Noeunoeuf", "Noeunoeuf est composé de plusieurs œufs. Il s'accroche fermement à sa proie avec ses bras pour l'empêcher de s'échapper.", Grass, 1, 60, abilitys[15], abilitys[27]},
{"Noadkoko", "Noadkoko évolue à partir de Noeunoeuf. Il a un corps plus grand et plus robuste.", Grass, 2, 95, abilitys[15], abilitys[8]},
{"Osselait", "Osselait porte un crâne d'adulte sur sa tête. Il est très protecteur envers son crâne et le considère comme un trésor.", Ground, 1, 50, abilitys[39], abilitys[36]},
{"Ossatueur", "Ossatueur utilise l'os qu'il porte comme arme. Il peut frapper ses ennemis avec une force incroyable.", Ground, 2, 60, abilitys[39], abilitys[33]},
{"Kicklee", "Kicklee est un expert en arts martiaux. Il peut donner plusieurs coups de pied en une seconde.", Fighting, 1, 50, abilitys[33], abilitys[35]},
{"Tygnon", "Tygnon utilise des mouvements de karaté pour attaquer ses ennemis. Il peut casser des planches de bois avec ses poings puissants.", Fighting, 2, 50, abilitys[33], abilitys[4]},
{"Excelangue", "Excelangue a une langue très longue qu'il utilise pour attraper sa proie. Il peut lécher sa proie pour la paralyser.", Normal, 1, 90, abilitys[36], abilitys[57]},
{"Smogo", "Smogo libère des gaz toxiques qui polluent l'air autour de lui. Il est souvent évité en raison de son odeur nauséabonde.", Poison, 1, 40, abilitys[63], abilitys[31]},
{"Smogogo", "Smogogo est encore plus toxique que Smogo. Il peut émettre des gaz corrosifs qui endommagent l'environnement.", Poison, 2, 65, abilitys[63], abilitys[30]},
{"Rhinocorne", "Rhinocorne a une peau très dure qui le protège des attaques ennemies. Il peut charger ses ennemis avec ses puissantes cornes.", Ground, 1, 80, abilitys[33], abilitys[58]},
{"Rhinoféros", "Rhinoféros est plus grand et plus robuste que Rhinocorne. Il peut défoncer des murs avec ses cornes puissantes.", Ground, 2, 105, abilitys[33], abilitys[58]},
{"Leveinard", "Leveinard a un cœur énorme qui lui permet de guérir les blessures des autres Pokémon. Il est très apprécié des dresseurs.", Normal, 1, 250, abilitys[11], abilitys[2]},
{"Saquedeneu", "Saquedeneu a des lianes très tranchantes qu'il utilise pour capturer des proies. Il peut aussi les utiliser pour se balancer d'arbre en arbre.", Grass, 1, 60, abilitys[27], abilitys[35]},
{"Kangourex", "Kangourex porte toujours son petit dans sa poche. Il est très protecteur envers son petit et peut devenir agressif s'il est menacé.", Normal, 1, 105, abilitys[52], abilitys[50]},
{"Hypotrempe", "Hypotrempe a une queue en spirale qu'il utilise comme une hélice pour nager rapidement. Il est très agile dans l'eau.", Water, 1, 30, abilitys[23], abilitys[37]},
{"Hypocéan", "Hypocéan évolue à partir d'Hypotrempe. Sa queue en spirale lui permet de nager à des vitesses incroyables.", Water, 2, 55, abilitys[23], abilitys[1]},
{"Poissirène", "Poissirène chante une mélodie captivante pour attirer les marins. Il peut également utiliser son chant pour endormir ses ennemis.", Water, 1, 45, abilitys[23], abilitys[57]},
{"Poissoroy", "Poissoroy a une couronne majestueuse sur la tête. Il est très territorial et protège son territoire avec ferveur.", Water, 2, 80, abilitys[23], abilitys[37]},
{"Stari", "Stari a un corps en forme d'étoile. Il peut régénérer ses membres s'ils sont coupés.", Water, 1, 30, abilitys[12], abilitys[36]},
{"Staross", "Staross évolue à partir de Stari. Il a un corps en forme d'étoile et peut utiliser des pouvoirs psychiques pour attaquer ses ennemis.", Water, 2, 60, abilitys[12], abilitys[36]},
{"M. Mime", "M. Mime crée des barrières invisibles en pliant l'air. Il utilise ces barrières pour se protéger et pour piéger ses ennemis.", Psychic, 1, 40, abilitys[43], abilitys[14]},
{"Insecateur", "Insecateur a des lames très tranchantes sur ses pinces. Il peut couper des branches d'arbres épaisses en une seule attaque.", Bug, 1, 70, abilitys[51], abilitys[4]},
{"Lippoutou", "Lippoutou utilise des mouvements gracieux pour dérouter ses ennemis. Il peut également donner des baisers glacés pour geler ses adversaires.", Ice, 1, 65, abilitys[12], abilitys[43]},
{"Élektek", "Élektek génère de l'électricité en se déplaçant. Il peut stocker de l'électricité dans son corps pour l'utiliser dans ses attaques.", Electric, 1, 65, abilitys[22], abilitys[37]},
{"Magmar", "Magmar a un corps enflammé qui brûle à une température extrêmement élevée. Il utilise le feu dans ses attaques.", Fire, 1, 65, abilitys[6], abilitys[37]},
{"Scarabrute", "Scarabrute est extrêmement fort et peut soulever des objets très lourds. Il est souvent utilisé pour des travaux de construction.", Bug, 1, 70, abilitys[64], abilitys[4]},
{"Tauros", "Tauros est très territorial et charge quiconque s'approche de son territoire. Il est rapide et puissant.", Normal, 1, 75, abilitys[50], abilitys[33]},
{"Magicarpe", "Magicarpe est un Pokémon faible qui ne peut pas attaquer. Il se développe en un Pokémon puissant lorsqu'il évolue en Gyarados.", Water, 1, 20, abilitys[38], abilitys[23]},
{"Léviator", "Léviator est redouté pour sa puissance et sa férocité. Il peut infliger des dégâts massifs avec ses attaques aquatiques.", Water, 2, 95, abilitys[38], abilitys[23]},
{"Lokhlass", "Lokhlass a un pelage épais qui le protège du froid. Il est capable de nager dans des eaux glacées sans être affecté.", Water, 3, 130, abilitys[38], abilitys[15]},
{"Métamorph", "Métamorph peut prendre l'apparence de n'importe quel autre Pokémon. Il utilise cette capacité pour tromper ses ennemis.", Normal, 1, 48, abilitys[56], abilitys[58]},
{"Évoli", "Évoli a plusieurs évolutions possibles en fonction de facteurs tels que l'amitié avec son dresseur ou l'environnement.", Normal, 1, 55, abilitys[23], abilitys[24]},
{"Aquali", "Aquali évolue à partir d'Évoli lorsqu'il est exposé à une Pierre Eau. Il a une excellente natation.", Water, 2, 65, abilitys[23], abilitys[11]},
{"Voltali", "Voltali évolue à partir d'Évoli lorsqu'il est exposé à une Pierre Foudre. Il peut générer de l'électricité à partir de ses poils.", Electric, 2, 65, abilitys[22], abilitys[24]},
{"Pyroli", "Pyroli évolue à partir d'Évoli lorsqu'il est exposé à une Pierre Feu. Il a une fourrure enflammée et peut contrôler le feu.", Fire, 2, 65, abilitys[6], abilitys[37]},
{"Porygon", "Porygon est un Pokémon artificiel créé par la science. Il peut se déplacer à travers les données informatiques.", Normal, 1, 65, abilitys[22], abilitys[14]},
{"Amonita", "Amonita était autrefois un Pokémon marin. Il a été ressuscité à partir d'une ancienne coquille fossilisée.", Rock, 1, 35, abilitys[38], abilitys[58]},
{"Amonistar", "Amonistar évolue à partir d'Amonita. Il a une coquille très dure et peut nager à des vitesses incroyables.", Rock, 2, 70, abilitys[38], abilitys[58]},
{"Kabuto", "Kabuto était autrefois un Pokémon marin. Il a été ressuscité à partir d'une ancienne carapace fossilisée.", Rock, 1, 30, abilitys[47], abilitys[58]},
{"Kabutops", "Kabutops évolue à partir de Kabuto. Il a des lames tranchantes sur ses pattes et peut nager à des vitesses élevées.", Rock, 2, 60, abilitys[47], abilitys[58]},
{"Ptéra", "Ptéra est un Pokémon préhistorique qui peut voler à des altitudes extrêmement élevées. Il est le symbole de la vie éternelle.", Rock, 3, 80, abilitys[32], abilitys[58]},
{"Ronflex", "Ronflex est un Pokémon paresseux qui passe la majeure partie de la journée à dormir. Il a un appétit insatiable.", Normal, 1, 160, abilitys[11], abilitys[24]},
{"Artikodin", "Artikodin est l'un des Pokémon légendaires. Il contrôle la glace et peut créer d'énormes tempêtes de neige.", Ice, 1, 90, abilitys[8], abilitys[36]},
{"Électhor", "Électhor est l'un des Pokémon légendaires. Il génère de l'électricité pendant les orages et peut créer des éclairs.", Electric, 1, 90, abilitys[22], abilitys[37]},
{"Sulfura", "Sulfura est l'un des Pokémon légendaires. Il contrôle le feu et peut créer des flammes intenses.", Fire, 1, 90, abilitys[6], abilitys[37]},
{"Minidraco", "Minidraco est un dragon jeune qui aime jouer et s'amuser. Il évolue en Draco à mesure qu'il grandit.", Dragon, 1, 41, abilitys[39], abilitys[32]},
{"Draco", "Draco est plus mature que Minidraco. Il a des ailes qui lui permettent de voler et de se déplacer rapidement.", Dragon, 2, 61, abilitys[39], abilitys[32]},
{"Dracolosse", "Dracolosse est le stade final de l'évolution de Minidraco. Il est extrêmement puissant et peut infliger des dégâts massifs avec ses attaques.", Dragon, 3, 91, abilitys[39], abilitys[37]},
{"Mewtwo", "Mewtwo est l'un des Pokémon légendaires les plus puissants. Il a des pouvoirs psychiques incroyables et peut contrôler les esprits.", Psychic, 1, 106, abilitys[43], abilitys[50]},
{"Mew", "Mew est un Pokémon mythique rare. Il est dit avoir l'ADN de tous les Pokémon et peut utiliser toutes les attaques.", Psychic, 1, 100, abilitys[43], abilitys[24]} };

	vector<Trainer> entityRef::trainers = {
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
	
	Pokemon& entityRef::getPokemon(int index)
	{
		return allPokemons[index];
	}

	Trainer& entityRef::getTrainer(int index)
	{
		return trainers[index];
	}

	Ability& entityRef::getAbility(PokeType pokemonType)
	{
		vector<Ability> available = {};
		for (int i = 0; i < abilitys.size(); i++) {
			if (abilitys[i].getPoketype() == pokemonType) {
				available.push_back(abilitys[i]);
			}
		    
		}
		
	}

