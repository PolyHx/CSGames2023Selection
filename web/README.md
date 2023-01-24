# Examen CS Games 2023 - Web (10 points)

## Mise en situation

Polytechnique vous met au défi de rendre le dossier étudiant *great again*. Le défi est de grande envergure! Le dossier étudiant est désuait depuis sa création il y plus de 10 ans maintenant.

## Technologie

Vous êtes libre d'utiliser les technologies que vous désirez. On vous demande seulement de faire la partie *frontend*, vous pouvez donc *hardcoder* vos données directement dans votre code.

On vous conseille d'utiliser Angular, mais bon si vous voulez faire de la sorcellerie avec autre chose, c'est correct aussi.

## Authentification (1 point)

On va être honnête ici, les mots de passes de 8 caractères maximum (et minimum ¯\\_(ツ)_/¯), c'est pas ce qu'il y a de plus sécuritaire. C'est pourquoi nous avons décidé d'augmenter le nombre de caractère à 25! Pas plus, pas moins. 25.

La page d'authentification doit contenir:
- Le logo de Poly
- Input pour le code d'accès
- Input pour le mot de passe (oubliez pas le fameux 25)
- Input pour la date de naissance (Pour pouvoir voler ton identité plus facilement)
- Le bouton "Connexion" est laisser à votre discrétion (ou pas)

## Page principale (1 point)

Nous avons discuter longuement avec notre équipe de design (on a presque bruler tout le budget avec eux...) et nous en sommes venu à la conclusion que l'application les boutons de la page principale du dossier étudiant actuel sera remplacé par une navbar. Par défaut, nous aimerions avoir un gif de bienvenue afin que l'étudiant honête se sent à la maison.

La page principale doit contenir:
- Un navbar avec les différents menu possible
    - Renseignements personnels
    - Bulletin cumulatif / Notes du trimestre courrant
    - Horaire personnel
    - Proposition de choix de cours
    - Attestation dee fréquentation scolaire
    - Dossier financier
- Par défaut, affichier un gif savoureux qui rendera votre correcteur heureux!

## Page des renseignements personnels (2 points)

Cette page permet à l'étudiant de fournir ses informations personnels afin de permettre à Poly d'être vulnérable à des cyber attaques. Mais n'ayez aucune crainte, ce n'est arrivé qu'une seule fois (j'pense)

La page des renseignements personnels doit contenir:
- Section permettant la modification des informations confidentielles (if you know what I mean)
    - Nouveau mot de passe
    - Confirmation du nouveau mot de passe
    - Ancien mot de passe
    - Numéro d'assurance sociale
- Section permettant la modification des coordonnées
    - Adresse
    - Adresse (suite)
    - Ville
    - Province
    - Pays
    - Code postal
    - Tél. domicile
- Section permettant la modification du nom de votre mère à la naissance
    - Nom
    - Prénom
- Section permettant la modification du nom de votre employeur
    - Nom de l'employeur
    - Tél. travail
    - Poste
- Section permettant la modification du nom de la personne a contacter en cas d'urgence
    - Nom
    - Prénom
    - Lien de parenté
    - Tél. domicile
    - Tél. travail
    - Poste
- Section permettant la modification du l'adresse des parents
    - Adresse
    - Adresse (suite)
    - Ville
    - Province
    - Pays
    - Code postal

## Page de l'horaire personnel (3 points)

Nous vous demandons ici d'être un peu créatif et de rendre ça beau. Notre équipe de design nous a dit que la veille version était laide (un peu oué).

La page de l'horaire personnel doit contenir:
- La liste des cours avec
    - Sigle
    - Nom complet
    - Groupe théorique
    - Groupe laboratoire
    - Nombre de crédits
- Horaire détaillé
    - Mettez moi ça beau

## Page de proposition de choix de cours (3 points)

Nous avons décidé d'être révolutionnaire de permettre au étudatian de créer son horaire! Cette page est donc semblable à la page de l'horaire personnel, à l'exception que l'étudiant peut *drag and drop* les cours qu'ils désirent dans son horaire.
