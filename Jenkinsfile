pipeline {
  agent any 
    stages {
      stage ('install' )
      {
        steps {
          sh ''' sudo apt-get install make gcc '''
        }
      }
      stage ('build' ) {
        steps { 
          sh ''' make '''
        }
      }
    }
}
