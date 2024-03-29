# singleton --> one single instance
# if u want a new instance, u will get the old one (already created) instance

class Singleton:
    _instance = None
    def __init__(self) -> None:
        if Singleton._instance is None:
            Singleton._instance = self
        else:
            raise Exception('This is singleton. Already have an instance, use that one by calling get_instance method')
        
    @staticmethod
    def get_instance():
        if Singleton.__instance is None:
            Singleton()
        return Singleton.__instance

first = Singleton.get_instance()
print(first)