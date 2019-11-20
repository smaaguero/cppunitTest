pipeline {
    agent any
	 options {
	    disableConcurrentBuilds()
	  }
    stages {
	stage('Running tests') {
		steps {
		  sh '''#!/bin/bash
      mkdir -p build
      cd build
      cmake .. -DUSEXUNIT=ON
      make -j4
      ./build/test/aritTest
		    '''
		}
	}
        stage('Last stage'){
	    agent any
            steps {
		sh 'sleep(10)'
	    }
        }
    }
  post {
    always {
        xunit '**/testResult.xml'
        cleanWs()
    }
  }
}jenkinsFile
