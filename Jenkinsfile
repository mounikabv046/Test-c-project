pipeline {
  agent any 
  stages {
      stage ('build' ) {
        steps { 
          sh ''' make clean '''
        }
      }
    stage ( 'archive' ) {
      steps {
        archiveArtifacts artifacts: '*.exe', followSymlinks: false
      }
    }
    }
}
