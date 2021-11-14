cars=['ok','ok','ok','faulty','ok']
for car_status in cars:
    print(f"The status of your car is {car_status}")
    if car_status is 'faulty':
     print("I'm stopping the production line")
     break
