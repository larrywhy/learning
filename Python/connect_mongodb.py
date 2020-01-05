import pymongo

# connect mlab db 
# account : {YOUR_MONGODB_ACCOUNT}
# password : {YOUR_MONGODB_PASSWORD}
# this sample is from mlab
myclient = pymongo.MongoClient("mongodb+srv://{YOUR_MONGODB_ACCOUNT}:{YOUR_MONGODB_PASSWORD}@cluster0-xwfam.mongodb.net/test?retryWrites=true&w=majority")

# open database
db = myclient.test

# open collections
collection = db.students
'''
student1 = {
    'id': '20170101',
    'name': 'Jordan',
    'age': 20,
    'gender': 'male'
}

student2 = {
    'id': '20170202',
    'name': 'Mike',
    'age': 21,
    'gender': 'male'
}

result = collection.insert_many([student1, student2])
print(result)
print(result.inserted_ids)
'''
#results = collection.find_one({'name': 'Mike'})

# show collections data
results = collection.find({'name': 'Mike'})
for single_result in results:
    print(type(single_result))
    print(single_result)
