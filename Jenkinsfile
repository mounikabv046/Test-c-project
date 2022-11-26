pipeline {
  agent any 
  stages {
      stage ('build' ) {
        steps { 
          sh ''' make clean '''
        }
      }
    stage ( 'archve' ) {
      steps {
        archiveArtifacts artifacts: '*.exe', followSymlinks: false
      }
    }
    }
}
