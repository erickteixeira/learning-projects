from Question import Question

question_prompts = [
    "what collor are apple ?\nA) red/green\nB) purple\nC) orange\n\n",
    "what collor are banana ?\nA) teal\nB) mangenta\nC) yellow\n\n",
    "what collor are strawberries?\nA) yellow\nB) red\nC) blue\n\n",
]

#creating the objectives and the correct answer to use as parametrer
questions =  [
    Question(question_prompts[0], "a"),
    Question(question_prompts[1], "c"),
    Question(question_prompts[2], "b"),
]

def run_test(questions):
    score = 0
    for question in questions:
        answer = input(question.prompt)
        if answer == question.answer:
            score += 1
    print("you got {}/{} correct".format(score, len(questions)))

# initialize the program with the function run_test
run_test(questions)
