pipeline {
    agent any
    
    stages {
     stage('Configure') {
            steps {
                sh '''
                
                echo "Creating a build folder"
                mkdir -p build
                echo "generate a build system"
                cmake -S game/ -B build/               
                '''
            }
        }
        stage('Build') {
            steps {
                sh '''
                echo "build the app"
                cd build/
                make             
                echo "archiving"
                '''
            }
           
        }
         stage('Test')  {
        steps {
                sh'''
                cd game/src/test/
                cmake  CMakeLists.txt         
                make  
                ./executeTests 
                '''
                catchError(buildResult: '2', stageResult: 'UNSTABLE') {
                    sh "exit 1"
                }
                        } 
             
               
  
         }
    }
}
