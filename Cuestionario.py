aciertos = 0
intentos = 0
preguntas = 0
incorrectas = 0

while(preguntas != 4):
    intentos +=1
    p1 = input("Quien escribio el paciente ")
    if(p1 == 'Alfredeo Olivas ' or p1 == 'alfredo olivas'):
        preguntas += 1
        print(f"Respuesta correcta. Tienes {preguntas} respuesta  bien" )
        aciertos += 1
    else:
        print(f"Respuesta incorrecta ")
        print(f"Tienes {preguntas} bien" )
        preguntas = 0
        incorrectas += 1
        
    p2 = int(input("Cuantos años va a cumplir el paciente en 2025 "))
    if(p2 == 10):
        print("Respuesta correcta")
        preguntas += 1
        print(f"Respuesta correcta. Tienes {preguntas} respuesta  bien" )
    
    else:
        print(f"Respuesta incorrecta ")
        print(f"Tienes {preguntas} bien" )
        preguntas = 0
        incorrectas += 1
        
    
    p3 = int(input("En que año se estreno con la novedad "))
    if(p3 == 2012):
        print("Respuesta correcta")
        preguntas += 1
        print(f"Respuesta correcta. Tienes {preguntas} respuesta bien" )
    
    else:
        print(f"Respuesta incorrecta ")
        print(f"Tienes {preguntas} bien" )
        preguntas = 0
        incorrectas += 1
        
    
        
        
    p4 = input("Que canciones de alfredo olivas se han grabado aguascalientes  ")
    if(p4 == "No" or p4 == "no"):
        print("Respuesta correcta")
        preguntas += 1
        print(f"Respuesta correcta. Tienes {preguntas} respuesta  bien" )
    
    else:
        print(f"Respuesta incorrecta ")
        print(f"Tienes {preguntas} bien" )
        preguntas = 0
        incorrectas += 1
        
        


    print("Tus resultados son")
    print(f"Aciertos {preguntas}")
    print(f"Incorrectas {incorrectas}")
    print(f"Tu numero de intento son {intentos}")
        
        
    
