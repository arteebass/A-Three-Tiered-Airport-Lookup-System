Team members:

Asa Davidson
    IDL, Debugging, KD-Tree, RPC communication
Charles Rothbacher
    IDL, Prefix tree, Debugging, RPC communication
Hunter Garrett
    IDL, Debugging, KD-Tree, RPC communication
Rueben Tiow 
    IDL, Debugging, KD-Tree, read file, RPC communication

Data structures and algorithms used:
    Prefix tree, KD-Tree, KNN algorithm

Third-party code:
    spherical distance formula
    trimwhitespace formula (logic borrowed from stackoverflow)
    KD-tree formula (borrowed logic from link:https://github.com/questbeat/kdtree)

Strengths and weaknesses:

Strengths
    Positive attitude
    Work ethics
    
Weaknesses
    .h files corrupted with incorrect data type
    Finding out where certain bugs came from
    Time wasted debugging
    Lack of consistency throughout source code
    Should of used a repository to share code

Instructions:
Run PlacesToAirports server, use airport-locations.txt
    ./PlacesToAirports_server "<filename.txt>"&
Run ClientToPlaces server, use places2k.txt
    ./ClientToPlaces_server "<filename.txt>"&
Run Client
    ./ClientToPlaces_client localhost "<city>" <two letter state>
    OR
    ./ClientToPlaces_client <ClientToPlaces_server host> "<city>" <two letter state>

Comments:
    First call takes longer because its constructing the KD-tree and prefix trie. 
    Each subsequent calls thereafter are faster since the KD-tree and prefix trie are 
    now already constructed.
