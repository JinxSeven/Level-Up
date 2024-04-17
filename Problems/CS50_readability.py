import math

text = input("Text: ")
word_count = 1
letter_count = 0
sentence_count = 0

for x in text:
    if x.isalpha():
        letter_count += 1

for x in text:
    if x == " ":
        word_count += 1
    elif x == "!" or x == "." or x == "?":
        sentence_count += 1

L = (letter_count / word_count) * 100
S = (sentence_count / word_count) * 100
colemanLiauIndex = round(0.0588 * L - 0.296 * S - 15.8)


if colemanLiauIndex > 16:
    print("Grade 16+")
elif 0 < colemanLiauIndex <= 16:
    print(f"Grade {colemanLiauIndex}")
else:
    print(f"Before grade {max(1, colemanLiauIndex)}")