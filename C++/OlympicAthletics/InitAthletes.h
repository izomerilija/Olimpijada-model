#ifndef INITATHLETES_H_INCLUDED
#define INITATHLETES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <iostream>
#include <random>

#include "AthleticsDiscipline.h"

using namespace std;


class SimulationHelper {

private:

    vector<string> maleFirstNames{ "Petar", "Oliver", "James", "Charlie", "Harris", "Lewis", "Leo", "Noah", "Jack", "Rory",
			"Alexander", "Max", "Logan", "Lucas", "Harry", "Theo", "Thomas", "Brodie", "Archie", "Jacob", "Finlay", "Finn", "Daniel", "Joshua", "Oscar",
			"Arthur", "Hunter", "Ethan", "Mason", "Harrison", "Freddie", "Ollie", "Adam", "William", "Jaxon", "Aaron", "Cameron", "Liam", "George", "Jamie",
			"Callum", "Matthew", "Muhammad", "Caleb", "Nathan", "Tommy", "Carter", "Blake", "Andrew", "Luke", "Jude", "Angus", "Riley", "Luca", "Samuel",
			"Joseph", "David", "Isaac", "Ryan", "Hamish", "Sonny", "Arlo", "Arran", "Cole", "Robert", "Blair", "Dylan", "Louie", "Ruaridh", "Connor",
			"Benjamin", "Kai", "Michael", "Jackson", "Leon", "Cooper", "Louis", "Theodore", "Fraser", "Owen", "Reuben", "John", "Carson", "Innes", "Elijah",
			"Murray", "Grayson", "Aiden", "Aidan", "Cody", "Elliot", "Ben", "Henry", "Sam", "Alex", "Ellis", "Gabriel", "Jax", "Callan", "Ruairidh", "Frankie",
			"Lachlan", "Roman", "Brody", "Josh", "Sebastian", "Struan", "Evan", "Kyle", "Myles", "Calum", "Lochlan", "Jayden", "Lyle", "Robbie", "Calvin",
			"Beauden", "Benedict", "Bertie", "Blayne", "Bowie", "Broden", "Bryan", "Buddy", "Caolan", "Cayde", "Chase", "Che", "Coll", "Colson", "Conner",
			"Corrie", "Damien", "Daniyal", "Danyal", "Dario", "Devlin", "Dillon", "Dorian", "Eamon", "Edmund", "Emil", "Emmett", "Ewen", "Finnlay", "Forbes",
			"Francesco", "Franco", "Gerard", "Giovanni", "Grey", "Hadley", "Harlow", "Haydn", "Heath", "Howie", "Ibraheem", "Jameson", "Jayce", "Jonny",
			"Judah", "Jura", "Kaelan", "Kelvin", "Khalid", "Kurtis", "Kyan", "Laurence", "Leonidas", "Lomond", "Lorcan", "Lorenzo", "Luis", "Maison", "Mayson",
			"Michal", "Milosz", "Morgan", "Murphy", "Ossian", "Ozzy", "Pearse", "Raheem", "Rehan", "Ronald", "Santino", "Sawyer", "Seonaidh", "Shaye", "Soren",
			"Sulaiman", "Sullivan", "Tomas", "Tommie", "Vivaan", "Wilfred", "Yunus", "Zachariah", "Zakaria", "Aahil", "Aaran", "Aarav", "Aayansh", "Abdallah",
			"Abe", "Abraham", "Alexandru", "Amos", "Aonghus", "Apollo", "Arham", "Arjun", "Armando", "Arron", "Arryn", "Asa", "Ash", "Austen", "Baillie",
			"Bentley", "Bo", "Bowen", "Lawrence", "Layne", "Lewie", "Lio", "Llewyn", "Loghan", "Milan", "Dragan", "Marko", "Luka", "Dimitrije", "Slavko",
			"Luc", "Lucas-Scott", "Luciano", "Lucifer", "Ludovico", "Lyal", "Mahir", "Mahmood", "Maks", "Malachi", "Mani", "Manveer", "Marlo", "Marty",
			"Martyn", "Mason-James", "Matisse", "Matt", "Maxime", "Mckenzie", "Md", "Mehmed", "Mehmet", "Mete", "Mihail", "Mikal", "Mike", "Mikkel", "Millen",
			"Miran", "Mitch", "Mohab", "Moiz", "Montgomery", "Monty", "Moray", "Morris", "Mubeen", "Murdoch", "Nali", "Natanael", "Nathanael", "Nawaz",
			"Nihaal", "Nihal", "Nikolai", "Nikolaos", "Nile", "Nixon", "Nyle", "Obadiah", "Oban", "Ocean", "Olaf", "Omari", "Oren", "Orran", "Oryn", "Oskaras",
			"Padraig", "Paulo", "Pip", "Qusay", "Radin", "Raef", "Rafferty", "Raffi", "Reegan", "Regan", "Rehaan", "Remi", "Reo", "Reon", "Reve", "Rhiley",
			"Rhoan", "Rhogan", "Rhu", "Riccardo", "Roderick", "Romi", "Ronin", "Roran", "Roscoe", "Roux", "Ruaidhri", "Russell", "Saad", "Sahil", "Salahuddin",
			"Samarth", "Samy", "Satvik", "Seb", "Seoras", "Serge", "Shahwaiz", "Siddhant", "Somhairle", "Sorley", "Sorren", "Stevie", "Stirling", "Beniamin",
			"Benneit", "Bennet", "Bennie", "Bernard", "Bernardo", "Bevan", "Bhavtaz", "Bhrodi", "Billie", "Billy-Lee", "Binyamin", "Biwar", "Bligh", "Blu",
            "Brannon", "Braun-George", "Braxton-Lee", "Braxx", "Braylon", "Brayson", "Brenden", "Brendyn", "Brent", "Brentley", "Brently", "Bret", "Brett",
			"Brixton", "Broadie", "Brock", "Brodan", "Cheng", "Chet", "Chidera", "Chideziri", "Chidozie", "Chidubem", "Cj",
			"Claiton", "Claye", "Clint", "Cobain", "Coban", "Cobi", "Cobie-Cruz", "Cobin", "Codey", "Codie", "Cody-Joe", "Cody-Ross", "Coen-Knox", "Coeray",
			"Daividh", "Daley", "Dalin", "Dalloch", "Damilare", "Dan", "Daniel-James", "Danielius", "Danielle", "Daniels", "Dany", "Danyil-James", "Daragh",
			"Kalleb", "Kallen", "Kaloyan", "Kalub", "Kalyan", "Kalyn", "Kamari", "Kambel", "Kambell", "Kameron", "Kamsi", "Kamsiy", "Karamo", "Karar", "Karden",
			"Karim", "Karlyle", "Karsen", "Karsyn", "Karsyon", "Kartar", "Karter-Jay", "Kasen", "Kasparas", "Kaspars", "Kassem", "Kavan", "Kayal", "Kayce",
			"Kaycen", "Kayde", "Kayden-James", "Kayleb-Arthur", "Kaylin", "Kaylum", "Kayne", "Kayra", "Kaysen", "Kaziah", "Kc", "Keagan", "Keaten",
			"Keegan-James", "Keeghan", "Keenan", "Keevan", "Keeyano", "Kei", "Keian", "Keiano", "Keillor", "Keirney", "Kel", "Kelby", "Kell", "Kellan", "Kelso",
			"Konstantin", "Valentino", "Vali", "Ziggy", "Zinedine", "Ziyad", "Zlatin", "Zohaib", "Zohan" };

    vector<string> femaleFirstNames{ "Ada", "Adelaide", "Adele", "Adeline", "Adrienne", "Agatha", "Agnes", "Aileen", "Alana",
			"Alberta", "Albertina", "Alexandra", "Alexis", "Alfreda", "Alice", "Alison", "Alma", "Althea", "Alvina", "Amabel", "Amanda", "Amber", "Amelia",
			"Amy", "Anastasia", "Andrea", "Angela", "Anita", "Anna", "Annabel", "Annette", "Anthea", "Antoinette", "Antonia", "April", "Arabella", "Arlene",
			"Ashley", "Audrey", "Augusta", "Augustina", "Aurora", "Ava", "Barbara", "Beatrice", "Belinda", "Belle", "Berenice", "Bertha", "Betty", "Beverly",
			"Blair", "Blanche", "Blythe", "Bonnie", "Brenda", "Brett", "Bridget", "Brittany", "Camille", "Candace", "Caren", "Carla", "Carlotta", "Carmen",
			"Carol", "Caroline", "Cassandra", "Catherine", "Cecilia", "Celeste", "Celestine", "Celia", "Celine", "Charity", "Charlene", "Charlotte", "Cheryl",
			"Christine", "Clara", "Clarice", "Claudia", "Clemency", "Clementine", "Colleen", "Constance", "Cora", "Cordelia", "Corinne", "Cornelia", "Courtney",
			"Crystal", "Cynthia", "Daisy", "Danielle", "Daphne", "Darlene", "Deborah", "Delia", "Delilah", "Dell", "Denise", "Diana", "Dinah", "Dolores",
			"Dominique", "Donna", "Dora", "Doreen", "Doris", "Dorothy", "Edith", "Edna", "Elaine", "Eleanor", "Elisa", "Elizabeth", "Ella", "Eloise",
			"Elsie (see Alice", "Elvina", "Elvira", "Emily", "Emma", "Erica", "Erin", "Ernestine", "Estella", "Esther", "Ethel", "Etta", "Eugenia", "Eulalia",
			"Eunice", "Euphemia", "Eustacia", "Eve", "Eveline", "Evangeline", "Faith", "Felicia", "Florence", "Frances", "Francesca", "Francine", "Frederica",
			"Gabrielle", "Genevieve", "Georgina", "Geraldine", "Gertrude", "Gillian", "Gina", "Gladys", "Glenda", "Gloria", "Goldie", "Grace", "Gwendolen",
			"Hannah", "Harriet", "Hazel", "Heather", "Helen", "Helga", "Henrietta", "Hilary", "Hilda", "Holly", "Honora", "Hope", "Ida", "Imogen", "Ingrid",
			"Irene", "Iris", "Irma", "Isabel", "Isadora", "Jacqueline", "Jamesina", "Jane", "Janet", "Janice", "Jean", "Jeannette", "Jemima", "Jennifer",
			"Jenny", "Jessica", "Joanna", "Joceline", "Josephine", "Joyce", "Judith", "Julia", "Julianne", "Juliet", "June", "Justina", "Karen", "Katherine",
			"Kathleen", "Kelly", "Kimberly", "Kristina", "Laura", "Laureen", "Laurel", "Laverne", "Lavinia", "Leah", "Leila", "Lena (see Helen", "Leona",
			"Leonora", "Leslie", "Leticia", "Lillian", "Lily", "Linda", "Lindsay", "Lisa (see Alice", "Lois", "Lona", "Lora", "Lorena", "Lorna", "Loretta",
			"Lorinda", "Lorraine", "Lottie", "Louise", "Lucille", "Lucinda", "Lucy", "Lydia", "Lynn", "Mabel", "Madeleine", "Magdalene", "Marcia", "Margaret",
			"Marianne", "Marilyn", "Maribel", "Marietta", "Marina", "Marion", "Marjorie", "Martha", "Martina", "Mary", "Mary", "Matilda", "Maud", "Maureen",
			"Maxine", "Megan", "Melanie", "Melinda", "Melissa", "Mercedes", "Meredith", "Michelle", "Mildred", "Millicent", "Minnie", "Mirabel", "Miranda",
			"Miriam", "Moira", "Molly", "Mona", "Monica", "Morgan", "Muriel", "Myra", "Myrtle", "Nadine", "Natalie", "Nancy", "Nell", "Nettie", "Nicki",
			"Nicole", "Nina", "Noel", "Nora", "Noreen", "Norma", "Octavia", "Olive", "Olympia", "Ophelia", "Pamela", "Pansy", "Patricia", "Paula", "Pearl",
			"Peggy", "Penelope", "Phoebe", "Phyllis", "Polly", "Priscilla", "Prudence", "Rachel", "Raquel", "Rebecca", "Regina", "Renata", "Renee", "Rhoda",
			"Rhonda", "Roberta", "Rose", "Rosabel", "Rosalie", "Rosaline", "Rosalind", "Roseanna", "Rosemary", "Rowena", "Roxanne", "Ruby", "Ruth", "Sabrina",
			"Samantha", "Sarah", "Selina", "Selma", "Shannon", "Sharon", "Shauna", "Sheila", "Shelley", "Shirley", "Sibyl", "Sidney", "Sonia", "Sophia",
			"Stacy", "Stephanie", "Stella", "Susan", "Sylvia", "Tabitha", "Tamara", "Tanya", "Teresa", "Theodora", "Thelma", "Tiffany", "Tina", "Tracy",
			"Ulrica", "Una", "Ursula", "Valentina", "Valerie", "Vanessa", "Vera", "Verna", "Veronica", "Victoria", "Vida", "Viola", "Violet", "Virginia",
			"Vivian", "Wanda", "Wendy", "Wilhelmina", "Wilma", "Winifred", "Yolanda", "Yvonne", "Yvette", "Zoe" };

    vector<string> lastNames{ "Johnson", "Williams", "Jones", "Brown", "Davis", "Miller", "Wilson", "Moore", "Taylor", "Anderson",
			"Thomas", "Jackson", "White", "Harris", "Martin", "Thompson", "Garcia", "Martinez", "Robinson", "Clark", "Rodriguez", "Lewis", "Lee", "Walker",
			"Hall", "Allen", "Young", "Hernandez", "King", "Wright", "Lopez", "Hill", "Scott", "Green", "Adams", "Baker", "Gonzalez", "Nelson", "Carter",
			"Mitchell", "Perez", "Roberts", "Turner", "Phillips", "Campbell", "Parker", "Evans", "Edwards", "Collins", "Stewart", "Sanchez", "Morris", "Rogers",
			"Reed", "Cook", "Morgan", "Bell", "Murphy", "Bailey", "Rivera", "Cooper", "Richardson", "Cox", "Howard", "Ward", "Torres", "Peterson", "Gray",
			"Ramirez", "James", "Watson", "Brooks", "Kelly", "Sanders", "Price", "Bennett", "Wood", "Barnes", "Ross", "Henderson", "Coleman", "Jenkins",
			"Perry", "Powell", "Long", "Patterson", "Hughes", "Flores", "Washington", "Butler", "Simmons", "Foster", "Gonzales", "Bryant", "Alexander",
			"Russell", "Griffin", "Diaz", "Hayes", "Myers", "Ford", "Hamilton", "Graham", "Sullivan", "Wallace", "Woods", "Cole", "West", "Jordan", "Owens" };

public:

    string randomString(int what = 3){  //what = gender (enum)
        vector<string> strings;
        if(what == 1 )
            strings = maleFirstNames;
        else if (what == 2)
            strings = femaleFirstNames;
        else
            strings = lastNames;
        srand (time(0)); //null

        int index = rand() % (strings.size());
        return strings[index];
    }

    AthleticsDiscipline getRandomSport(){
        srand (time(0));
        int index = rand() % (AthleticsDiscipline::HAMMER_THROW + 1); //range(1 - poslednji u enumu disciplina)
        return AthleticsDiscipline(index);
    }

    double getQualificationScore(){
        return 500 + (double)(rand() % 500); //staviti na dve decimale
    }
};

#endif // INITATHLETES_H_INCLUDED
