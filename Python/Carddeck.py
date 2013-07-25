#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      Student
#
# Created:     24/07/2013
# Copyright:   (c) Student 2013
# Licence:     <your licence>
#-------------------------------------------------------------------------------
import random

def main():
    class card :
        def _init_(self, suit, value) :
            self.suit = suit
            self.value = value

        def getSuit(self) :
            return self.suit
        def getValue(self) :
            return self.value
        def _str_(self) :
            card = self.value + ' of ' + self/suit
            return card

    suits = ["Clubs", "Spades", "Diamonds", "Hearts"]
    faces = ["Jack", "Queen", "King", "Ace"]
    values = []
    deck = []


    for value in range(2,11) :
        values.append(str(value))

    values.extend(faces)

    for i in suits :
        for j in values :
            newCard = Card(i,j)
            deck.append(newCard)
    #random.shuffle(deck)



for x in deck :
        print(x)







if __name__ == '__main__':
    main()
